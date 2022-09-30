#include "main.h"
/**
 *_print_rev_recursion - prints a string ib reverse
 *Description: prints string in reversse
 *@s: string pointer
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
