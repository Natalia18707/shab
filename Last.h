#pragma once

#include"Libraries.h"
#include"Prototypes.h"

template <class T> T Last(T* arr, int size)
{
	T last = -10;

	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) < 0.0)
		{
			last = i;

		}

	}
	return last;
}
