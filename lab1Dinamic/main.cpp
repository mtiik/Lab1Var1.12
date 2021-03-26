#include <iostream>

using namespace std;

extern double* vvodd(int& sizes);
extern void vivodd(double* arr, int sizes);
extern double* chetd(double* arr1, int sizes);

int main()
{
    int povtor = 0;
    do {
        setlocale(LC_ALL, "Russian");
        int drob = 0;
        int sizes = 0;
        cout << "введите количество элементов" << endl;
        cin >> sizes;
        while (sizes < 0)
        {
            cout << "введено неверное n" << endl;
            cin >> sizes;
        }
        double* arr1 = vvodd(sizes);
        vivodd(arr1, sizes);
        double* arr2 = chetd(arr1, sizes);
<<<<<<< HEAD
        if (arr2)
        {
            vivodd(arr2, sizes);
            delete[] arr2;
        }
        else
        {
            cout << "массив не создан" << endl;
        }
        delete[] arr1;
=======
        vivodd(arr2, sizes);
        delete[] arr1;
        delete[] arr2;
>>>>>>> d99fc3307237d582c5efc5f9929ed62a99cd6bd7
        cout << "для повторного запуска программы нажмите 1 для завершения нажмите 0" << endl;
        cin >> povtor;
        if (povtor > 1 || povtor < 0)
        {
            while (povtor > 1 || povtor < 0)
            {
                cout << "вы ввели не коректное значение попробуйте еще раз " << endl;
                cout << "попробуйте еще раз" << endl;
                cin >> povtor;
            }
        }
    } while (povtor == 1);
    return 0;
}
