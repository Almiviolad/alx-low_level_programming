#include "main.h"
#include <stdio.h>
/**
 *print_array - prints every element in an array
 *@a: the array pointer
 *@n: number of elemnts in the array
 */
void print_array(int *a, int n)
{
	int c;
	
	for (c = 0; c < n - 1; c++)
	{
		printf("%d, ", a[c]);
	}
	if (c == n - 1)
		printf("%d", a[c]);
	_putchar('\n');
}
