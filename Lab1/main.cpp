
#include <iostream>

using namespace std;

extern void vivod(double m2[], double m[], int n, int drob);
extern void vvod(double m[],int n);
extern int proverka_nadrob(double m[], int drob, int n);
extern int chet(double m[], double m2[], int drob, int mesto, int n);
extern void chet2(double m[], double m2[], int drob, int mesto, int n);


int main()
{
	setlocale(LC_ALL, "Russian");
	int povt = 1;
	int n;
	do{
		cout << "введите количество элементов в массиве" << endl;
		cin >> n;
		int drob = 0;
		int mesto = 0;
		const int mas = 1000;
		double m[mas];
		double m2[mas];
		vvod(m, n);
		drob = proverka_nadrob(m, drob, n);
		mesto = chet( m, m2, drob, mesto, n);
		chet2(m, m2, drob, mesto, n);
		vivod(m, m2, n, drob);
		cout << "для повторного запуска программы нажмите 1 для завершения нажмите 0" << endl;
		cin >> povt;
		if (povt > 1 || povt < 0)
		{
			while (povt > 1 || povt < 0)
			{
				cout << "вы ввели не коректное значение попробуйте еще раз " << endl;
				cout << "попробуйте еще раз" << endl;
				cin >> povt;
			}
		}

	}
	while (povt == 1);
	return 0;
}