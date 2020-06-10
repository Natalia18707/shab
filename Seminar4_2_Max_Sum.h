#pragma once

#include"Libraries.h"
#include"Prototypes.h"

template <class T> void Seminar4_2_Max_Sum()
{
	int col;
	int row;
	InputSize4(col, row);

	T** arr = new T* [col];
	for (int i = 0; i < col; i++)
	{
		*(arr + i) = new T[col];
	}

	InputElements(arr, col, row);

	T max1 = Max1(arr, col, row);
	T max2 = Max2(arr, col, row);

	if (max1 == max2)
		cout << "All sums are the same: " << max1 << endl;
	else
		cout << "The max sum = " << Max(max1, max2) << endl;

	for (int i = 0; i < col; i++)
		delete *(arr + i);
	delete[] arr;
	arr = NULL;
}
