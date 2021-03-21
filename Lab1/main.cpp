#include <iostream>

using namespace std;

extern void vivod(double m[], int n);
extern void vvod(double m[],int n);
extern bool proverka_nadrob(double m[], int n);
extern int chet(double m[], double m2[], int mesto, int n);
extern void chet2(double m[], double m2[], int mesto, int n);


int main()
{
	setlocale(LC_ALL, "Russian");
	const int mas = 1000;
	int povt = 1;
	int n;
	do{
		cout << "введите количество элементов в массиве" << endl;
		cin >> n;
		int mesto = 0;
		double m[mas];
		vvod(m, n);
		vivod(m, n);
		if (proverka_nadrob(m, n)) {
			double m2[mas];
			mesto = chet( m, m2, mesto, n);
			chet2(m, m2, mesto, n);
			vivod(m2, n);
		}
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