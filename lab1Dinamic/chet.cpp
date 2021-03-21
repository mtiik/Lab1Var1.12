#include <iostream>
#include <vector>

using namespace std;

double* chetd(double* arr1, int sizes) {
	bool key = false;
	for (int i = 0; i < sizes; i++)
	{
		if (int(arr1[i]) < arr1[i])
		{
			key = true;
			break;
		}
	}
	if (!key) {
		return 0;
	}
	int k = 0;
	double* arr2 = new double(sizes);
	for (int i = 1; i < sizes; i++)
	{
		if (arr1[0] < arr1[i]) {
			arr2[k] = arr1[i];
			++k;
		}
	}
	arr2[k] = arr1[0];
	++k;
	for (int i = sizes - 1; i > 0; i--)
	{
		
		if (arr1[0] >= arr1[i]) {
			arr2[k] = arr1[i];
			k++;
		}
	}
	return arr2;
}