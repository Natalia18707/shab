#pragma once

#include"Libraries.h"
#include"Prototypes.h"

template <class T> T Max2(T** arr, int col, int row)
{
	T max2 = INT_MIN;

	for (int i = 0; i < col - 1; i++)
	{
		T sum = 0;

		for (int j = 0; j < i + 1; j++)
		{
			sum += *(*(arr + j + col - 1 - i) + j);//arr[j + col - 1 - i][j]
		}

		max2 = sum;

	}
	return max2;
}