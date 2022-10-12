#include "function_pointers.h"
/**
 *int_index - searches for an int
 *@array: elemnts to be searched
 *@size: size of array
 *@cmp: functionto be used to compare values
 *Return: index of element that is positive
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int result;

	if (array && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
		{
			result = cmp(array[i]);
			if (result != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
