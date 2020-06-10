#pragma once

#include"Libraries.h"

template <class T> void InputElements(T** arr, int col, int row)
{
	cout << "Enter the elements: " << endl;
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			cout << "Element [" << i << "][" << j << "] -->";
			cin >> *(*(arr + i) + j); 
		}
	}
}
