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

	if (size < 1 || !array)
		return (-1);
	mid = size/2;
	i = 0;
	printf("Searching in array: ");
	while (array[i] && i < (int)size)
	{
		if (array[i++])
			printf("%d, ", array[i]);
		else
			printf("%d", array[i]);
		i++;
	}
	if (array[mid] == value)
		return mid;
	else if (array[mid] < value)
	{
		size = size - mid - 1;
		return advanced_binary(&array[mid + 1], size, value);
	}
	else
		return advanced_binary(array, mid - 1, value);
}
