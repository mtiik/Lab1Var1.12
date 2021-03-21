#include<iostream>

using namespace std;

double* vvodd(int& sizes) {
    cin >> sizes;
    double* arr1 = new double(sizes);
    for (int i = 0; i < sizes; i++)
    {
        cout << "введите " << i << " элемент " << endl;
        cin >> arr1[i];
    }
    return arr1;
}

void vivodd(double* arr, int sizes) {
    for (int i = 0; i < sizes; i++)
    {
        cout << i << " элемент массива = " << arr[i] << endl;
    }
}