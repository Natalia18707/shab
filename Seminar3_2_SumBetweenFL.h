#pragma once

#include"Libraries.h"
#include"Prototypes.h"

template <class T> void Seminar3_2_SumBetweenFL()
{
	int size;
	InputSize(size);

	T* arr = new T[size];

	InputElements(arr, size);
	T first = First(arr, size);
	T last = Last(arr, size);

	if (first == last)
		cout << "Error. There is one negative element in the array." << endl;
	else
		if (1 + first == last)
			cout << "Error. There are no elements between first and last negative elements." << endl;
		else
			if (2 + first == last)
				cout << "Error. There is one element between first and last elements." << endl;
			else
				if (first == -1)
					cout << "\n Error. There are no negative elements in the array.\n";
				else
				{
					cout << "The number of the first negative element: " << first
						<< "  The number of the last negative element: " << last << endl;
					cout << "The sum: " << SumBetweenFirstLast(arr, size) << endl;
				}
	delete[] arr;
}
