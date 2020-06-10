#pragma once

#include"Libraries.h"
#include"Prototypes.h"

template <class T> void Seminar3_3_Compress()

{
	int size;
	InputSize(size);

	T* arr = new T[size];

	InputElements(arr, size);

	Compress(arr, size);

}
