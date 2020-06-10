#pragma once

#include"Libraries.h"
#include"Prototypes.h"

template <class T> T First(T* arr, int size)
{
	T first = -1;

	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) < 0.0)
		{
			first = i;
			break;
		}

	}
	return first;
}
