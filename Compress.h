#pragma once

#include"Libraries.h"
#include"Prototypes.h"

template <class T> void Compress(T* arr, int size)
{
	T* Parray = Sort(arr, size);


	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) == *(Parray + i))
		{
			cout << "Error. The module of each element is greater than 1.";
			break;
		}
		else
			cout << *(Parray + i) << "  ";

	}
	delete[]Parray;
}
