#include "main.h"
/**
*print_binary - prints the binary reperesentaton of a number
*@n: The number to be changed to binary
*/
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
