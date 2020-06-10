#pragma once

#include"Libraries.h"

template <class T> void InputElements(T* arr, int size)

{
	cout << " Enter array:\n";
	for (int i = 0; i < size; i++)
	{
		cout << "element[" << i << "]--> ";
		cin >> *(arr + i);
	}
}
