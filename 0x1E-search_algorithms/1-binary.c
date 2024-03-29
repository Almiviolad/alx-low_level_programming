#include "search_algos.h"
/**
 *binary_search - searches for valie using binary search algo
 *@value: valur to aearch for
 *@array: array
 *@size: size of the array
 *Return: index of value or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int l, r, m, temp_l;

	if (array == NULL)
		return (-1);
	l = 0;
	temp_l = 0;
	m = 0;
	r = size - 1;

	while (l <= r)
	{
		m = (l + r) / 2;
		printf("Searching in array: ");
		temp_l = l;
		while (l <= r)
		{
			if (l != r)
				printf("%d, ", array[l]);
			else
				printf("%d\n", array[l]);
			l++;
		}
		l = temp_l;
		if (array[m] == value)
			return (m);
		else if (array[m] < value)
			l = m + 1;
		else
			r = m - 1;
	}
	return (-1);
}
