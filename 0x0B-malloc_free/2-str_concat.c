#include <stdio.h>
#include <stdlib.h>
/**
 *str_concat  - concatenate two strings
 *@s1: first string
 *@s2: second string
 *Return: new concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	unsigned int i, j;

	i = 0;
	j = 0;
	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	new_str = malloc((i * sizeof(char)) + (j * sizeof(char)) + 1);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		new_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		new_str[i] = s2[j];
		j++;
		i++;
	}
	new_str[i + j] = s2[j];
	return (new_str);
}
