#include <stdio.h>
/**
 *linear_search - searches for an element ib a array sequentially
 *@size: size of array
 *@array: array to search
 *@value: value to search for
 *Return: first index of value or -1(unsuccessful)
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]", i, array[i]);
		if (array[i] == value)
		{
			return (i + 1);
		}
	}
	return (-1);
}
