#include "main.h"
/**
*swap_int - swaps value of two variables
*@a: first variable pointer
*@b: second varuable pointer
*Description:Write a function that swaps the values of two integers.
*/

void swap_int(int *a, int *b)
{
	int val;

	val = *a;
	*a = *b;
	*b = val;
}
