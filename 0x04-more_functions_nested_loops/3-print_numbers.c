#include "main.h"
/**
 *print_numbers-prints number 0-9
 *Return:Always 0
 */
void print_numbers(void)
{
	int i;
	for(i = '0';i <= '9';i++)
	{
		putchar(i);
		putchar('\n');
	}
	return (0);
}
