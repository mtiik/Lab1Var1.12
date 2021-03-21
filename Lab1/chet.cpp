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

int chet(double m[], double m2[], int mesto, int n) {
	int mi = 0;
	for (int i = 0; i < n; i++)
	{
		if (m[0] < m[i])
		{
			m2[mi] = m[i];
			++mi;
			++mesto;
		}
	}
	mi = 0;
	return mesto;
}

void chet2(double m[], double m2[], int mesto, int n) {
	m2[mesto] = m[0];
	int k = n;
	k--;
	for (int i = 1; i < n; i++)
	{
		if (m[0] >= m[i])
		{
			m2[k] = m[i];
			k--;
		}
	}
	k = 0;
}