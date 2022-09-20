#include "main.h"
/**
 *_strcpy - copies a string to another
 *@dest: the file to be copied into
 *@src: the source file to be copied from
 *Return: *dest(the destination file)
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while ((src[index] || src[index] == '\0'))
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
