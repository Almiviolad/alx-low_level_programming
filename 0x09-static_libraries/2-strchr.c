#include "main.h"
/**
 *_strchr - locate a charcter in a string
 *@s: the string
 *@c: character to be located
 *Return: s +i (if found) or (0) if not
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	if (c == 0)
	{
		return (s + i);
	}
	return (0);
}
