#include "main.h"
/**
*_memcpy - copies n bytes from a string
*@dest: string pointer to be copied to
*@src: str pointer to copy from
*@n: number of bytes
*Return: dest
*/
char *_memcpy(char  *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i  < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
