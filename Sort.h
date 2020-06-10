#pragma once

#include"Prototypes.h"

template <class T> T* Sort(T* arr, int size)
{
	T* arr2 = new T[size];

	int j = 0;
	for (int i = 0; i < size; i++)
	{
		if (abs(*(arr + i)) >= 1)
		{
			*(arr2 + j) = *(arr + i);
			j++;
		}

	}

	for (int i = j; j < size; j++)
	{
		*(arr2 + j) = 0;
	}

	return arr2;
}
