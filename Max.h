#pragma once

#include"Libraries.h"
#include"Prototypes.h"

template <class T> T Max(T max1, T max2)
{
	T max = INT_MIN;

	max = max1;
	if (max < max2)
		max = max2;

	return max;
}