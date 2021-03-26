#include <iostream>

using namespace std;

bool proverka_nadrob(double m[], int n) {
	for (int i = 0; i < n; i++)
	{
		if (int(m[i]) != m[i])
		{
			return true;
		}
	}

	cout << "в масиве нет дробных чисел" << endl;
	return false;
}

int chet(double m[], double m2[], int n) {
	int mi = 0;
	if (!proverka_nadrob(m,n))
	{
		return 0;
	}
	for (int i = 0; i < n; i++)
	{
		if (m[0] < m[i])
		{
			m2[mi] = m[i];
			++mi;
		}
	}
	m2[mi] = m[0];
	mi++;
	for (int i = n-1; i > 0; i--)
	{
		if (m[0] >= m[i])
		{
			m2[mi] = m[i];
			mi++;
		}
	}
	return mi;
}
