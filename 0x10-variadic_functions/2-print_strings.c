#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
*print_strings - prints string passed as args
*@separator: mandatory arg
*@n: mandatory arg
*Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
		putchar('\n');
		va_end(ap);
}
