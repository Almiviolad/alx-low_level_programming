#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*create_array - create an array init with char c
*@c: Char in array
*@size: size of the array
*Return: array pointer
*/
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
	free(s);
}
