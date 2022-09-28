#include "main.h"
/**
 *_puts_recursíon - prints a string followed by nre line
 *@s: the string pointer
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
