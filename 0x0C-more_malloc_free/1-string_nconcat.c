#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat- concatenate two strings
 *@s1: first string
 *@s2: second string
 *@n:number of bytes to copy
 *Return: new concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
        char *new_str;
        unsigned int i, j;

        i = 0;
        j = 0;
        if (s1 == NULL)
                s1 = "";
        if (s2 == NULL)
                s2 = "";
        while (s1[i])
        {
                i++;
        }
        while (s2[j] && j <= n)
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
        while (s2[j] && j <= n)
        {
                new_str[i] = s2[j];
                j++;
                i++;
        }
        new_str[i] = '\0';
        return (new_str);
}
