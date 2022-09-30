/**
 *_strncat - concatenete n byte from a string
 *@dest:string variable to be concatenated to
 *@src:the string to be concatenated
 *@n:number of chars ro be concatenated
 *Return: char*(dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}
