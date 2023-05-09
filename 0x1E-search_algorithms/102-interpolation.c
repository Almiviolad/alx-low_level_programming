#include "search_algos.h"
/**
 *interpolation_search - searches for a value using intrpolation algo
 *@array: array
 *@size: size of the array
 *@value: value to search for
 *Return: index or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low, high;
	size_t pos;

	if (array == NULL)
		return (-1);
	low = 0;
	high = size - 1;
	while (low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] -
											  array[low])) * (value - array[low]));
		if ((int)pos > high || (int)pos < low)
			return (-1);
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
		return (-1);
}
