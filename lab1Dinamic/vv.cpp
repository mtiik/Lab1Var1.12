#include<iostream>

using namespace std;

double* vvodd(int& sizes) {
    double* arr1 = new double[sizes];
    for (int i = 0; i < sizes; i++)
    {
        cout << "ââåäèòå " << i << " ýëåìåíò " << endl;
        cin >> arr1[i];
    }
    return arr1;
}

void vivodd(double* arr, int sizes) {
    for (int i = 0; i < sizes; i++)
    {
        cout << i << " ýëåìåíò ìàññèâà = " << arr[i] << endl;
    }
}
