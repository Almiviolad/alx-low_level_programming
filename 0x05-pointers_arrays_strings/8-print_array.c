#include "main.h"
#include <stdio.h>
/**
 *print_array - prints every element in an array
 *@a: the array pointer
 *@n: number of elemnts in the array
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
