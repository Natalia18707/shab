#pragma once

#include"Libraries.h"
#include"Prototypes.h"

template <class T> T Max1(T** arr, int col, int row)
{
	T max1 = INT_MIN;

	for (int i = 0; i < col; i++)
	{
		T sum = 0;

		for (int j = 0; j < i + 1; j++)
		{

			sum += *(*(arr + j) + j + col - 1 - i); //arr[j][j + col - 1 - i]

		}

		max1 = sum;
	}
	return max1;
}