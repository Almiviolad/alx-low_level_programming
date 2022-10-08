#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*malloc_checked -  alocates memory
*@b: int the space is for
*Return: pointer to the space
*/
void *malloc_checked(unsigned int b)
{
	int *pb;

	pb = malloc(b);
	if (pb == 0)
	{
		exit(98);
	}
	return (pb);
}
