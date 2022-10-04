#include <stdio.h>
#include <stdlib.h>
/**
*_strdup - create an array with str
*@str: the pointer to the array
*Return: array pointer
*/
char *_strdup(char *str)
{
	char *new_str;
	unsigned int i, size;

	if (str == NULL)
		return (NULL);
	size = 0;
	i = 0;
	while (str[size])
	{
		size++;
	}
	new_str = malloc((size + 1)  * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	while (i <= size)
	{
		new_str[i] = str[i];
		i++;
	}
	return (new_str);
}
