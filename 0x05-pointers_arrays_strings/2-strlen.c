#include "main.h"
/**
 *_strlen - finds thelength of a stirng
 *@s: The string variable
 *Return: length of the string
 */
int _strlen(char *s)
{
	int item = 0;

	while (s[item] != '\0')
	{
		item++;
	}
	return (item);
}
