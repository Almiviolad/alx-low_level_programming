#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main-Entry point
 * Description: To determine if number is greater\
,less or equal to zero
 * Return:Always 0 (success)
*/

int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		if (a == 101)
			a += 1;
		if (a == 113)
			a += 1;
		putchar(a);
	}
	putchar('\n');
	return (0);
}
