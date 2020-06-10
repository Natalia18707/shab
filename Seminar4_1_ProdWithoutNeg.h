#pragma once

#include"Libraries.h"
#include"Prototypes.h"

template <class T> void Seminar4_1_ProdWithoutNeg()
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

	PrintProduct(arr, col, row);

	for (int i = 0; i < col; i++)
		delete* (arr + i);
	delete[] arr;
	arr = NULL;
}
