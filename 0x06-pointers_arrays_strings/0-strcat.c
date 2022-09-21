#include "main.h"
/**
 * _strcat - concatenate two strings
 *@dest: str to be cincatenated to
 *@src: str to be concatenated
 *Return: char * (dest)
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}
