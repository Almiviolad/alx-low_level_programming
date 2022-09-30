#include "main.h"
/**
 *print_line - prints line n number of times
 *Description: prints _ ofr n times and just a new line if n =0
 *@n: number of times _ should print
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
