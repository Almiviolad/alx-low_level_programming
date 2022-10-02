#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *@argc: argument count
 *@argv: array of args
 *Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
