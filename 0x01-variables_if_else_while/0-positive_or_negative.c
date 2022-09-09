#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main-Entry point
 * Description: To determine if number is greater,less or equal to zero
 * Return:Always 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n",n);
	else if (n < 0)
		printf("%d is negativ\ne",n);
	else if (n == 0)
		printf("%d is zero\n",n);
	return (0);
}
