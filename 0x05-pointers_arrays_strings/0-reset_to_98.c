#include "main.h"
/**
*reset_to_98 - takes a pointer to an int as parameter
*and updates the value it points to to 98.
*@p: pointer to n
*Description: chamges the value a var contan to 98
*/
void reset_to_98(int *p)
{
	int n;

	p = &n;
	*p = 98;
}
