#include "main.h"
/**
 *_strncpy - copies a number of string
 *@dest:the string variable to be copied
 *@src:the string to be copied
 *@n: number of chars to be copied
 *Return:char*
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (src[i] && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	for (i = j; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
