#include "main.h"

/**
 * rev_string - reverse string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int i, max, half;
	char first, last;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	max = i - 1;
	k = max / 2;
	while (k >= 0)
	{
		first = s[max - k);
		last = s[k];
		s[k] = first;
		s[max - k] = last;
		k--;
	}
}
