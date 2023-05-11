#include "search_algos.h"
/**
 *advanced_binary - uses advancebinary searvh algo for searching
 *@array: array yo seqrch
 *@size: size of the array
 *@value: value to search for
 *Return: index or -1(unsuccessful)
 */
int advanced_binary(int *array, size_t size, int value)
{
	int mid, i;

	if (!array)
		return (-1);
	i = 0;
	printf("Searching in array: ");
	while (i < (int)size)
	{
		if (i != (int)size - 1)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
		i++;
	}
	if (size == 1 && array[0] != value)
		return (-1);
	mid = (size - 1) / 2;
	if (array[mid] == value && array[mid - 1] != value)
		return (mid);
	else if (array[mid] < value)
	{
		int func = advanced_binary(&array[mid + 1], size - mid - 1, value);

		if (func == -1)
			return (-1);
		else
			return (mid + func + 1);
	}
	else
		return (advanced_binary(array, mid + 1, value));
}
