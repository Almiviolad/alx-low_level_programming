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
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l == 0)
		printf("Last digit of %d is %d and is 0\n", n, l);
	else if (l > 5)
		printf("Last digit of %d is %d and is greater than 5\n5", n, l);
	else if (l < 6 && l != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, l);
	return (0);
}
