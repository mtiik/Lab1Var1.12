#include <iostream>

using namespace std;

int proverka_nadrob(double m[], int drob, int n) {
	for (int i = 0; i < n; i++)
	{
		if (int(m[i]) != m[i])
		{
			drob = 1;
			return drob;
			break;

		}

	}

	cout << "в масиве нет дробных чисел" << endl;
	return drob;
}
int chet(double m[], double m2[], int drob, int mesto, int n) {
	if (drob > 0) {
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
	else
	{
		return 0;
	}
}
void chet2(double m[], double m2[], int drob, int mesto, int n) {
	if (drob > 0) {
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
}