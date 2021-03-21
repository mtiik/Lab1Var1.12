#include <iostream>

using namespace std;

void vvod(double m[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << "введите " << i + 1 << " элемент масива" << endl;
		cin >> m[i];
	}
};
void vivod(double m[], int n) {
	cout << " "<< endl;
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << " элемент первого масива =  " << m[i] << endl;
	}
	cout << " "<< endl;
};