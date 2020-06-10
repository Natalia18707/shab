#pragma once

#include"Libraries.h"
#include"Prototypes.h"

template <class T> void Seminar3_1_SumOddNum()
{
	int size;

	while (true)
	{
		InputSize(size);
		if (size < 4)
			cout << "This size can not be used in this option. Please, enter the size > 3" << endl;
		else
			break;

	}

	T* arr = new T[size];

	InputElements(arr, size);

	cout << "The sum: " << SumOddNum(arr, size) << endl;

	delete[] arr;
}
