#include "main.h"
/**
 *leet - encodes a string
 *@s: string to be encoded
 *Return: s
 */
char *leet(char *s)
{
	char Sl[] = "aeotl";
	char Su[] = "AEOTL";
	char code[] = "43071";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 5; j++)
		{
			if (s[i] == Sl[j] || s[i] == Su[j])
			{
				s[i] = code[j];
			}
		}
	}
	return (s);
		}
