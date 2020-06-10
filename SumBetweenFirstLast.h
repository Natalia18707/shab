#pragma once

#include"Libraries.h"
#include"Prototypes.h"

template <class T> T SumBetweenFirstLast(T* arr, int size)
{
	T sumbetweenfl = 0;
	T first = First(arr, size);
	T last = Last(arr, size);

	for (int i = first + 1; i < last; i++)
		sumbetweenfl += *(arr + i);

	return sumbetweenfl;
}
