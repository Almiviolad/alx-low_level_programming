#include "main.h"
/**
 *_puts_recursion - prints a string followed by nre line
 *Description: prints string
 *@s: the string pointer
 *Return: void
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
