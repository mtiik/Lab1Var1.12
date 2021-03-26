#include <iostream>

using namespace std;

extern void vivod(double m[], int n);
extern void vvod(double m[],int n);
extern int chet(double m[], double m2[], int n);


int main()
{
	setlocale(LC_ALL, "Russian");
	int povt = 1;
	int n;
	int mesto;
	do{
		cout << "введите количество элементов в массиве" << endl;
		cin >> n;
		while (n<0 || n>1000)
		{
			cout << "введено неверное n" << endl;
			cin >> n;
		}
		double m[1000];
		vvod(m, n);
		vivod(m, n);
		double m2[1000];
		mesto = chet( m, m2, n);
		if (mesto>0)
		{
			vivod(m2, n);
		}
		else
		{
			cout << "массив не создан" << endl;
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