#include "main.h"
/**
 *puts_half - prints half of a string
 *@str: the string variable
 */
void puts_half(char *str)
{
	int i, j, half;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	half = i / 2;
	while (j <= half)
	{
		_putchar(str[j]);
		j++;
	}
}
