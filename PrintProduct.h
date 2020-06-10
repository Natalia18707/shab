#pragma once

#include"Libraries.h"
#include"Prototypes.h"

template <class T> void PrintProduct(T** arr, int col, int row)
{
	T prod = 1;
	int counter = 0;
	int countErorr = 0;

	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			prod *= *(*(arr + i) + j);

			if (*(*(arr + i) + j) < 0)
				counter++;
		}
		if (counter == 0)
			cout << "The row: " << i << "  " << "The product= " << prod << endl;
		else
			countErorr++;

		counter = 0;
		prod = 1;
	}

	if (countErorr == row)
		cout << "Erorr!There are no rows without negative elements.";

}