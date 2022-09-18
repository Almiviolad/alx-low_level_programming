#include "main.h"
#include <stdio.h>
/**
 *main - program that prints 1 to 100 but fizz,buzz and fizzbuzz
*for multiples of 3,5 and both 3 and 5 respectively
*Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}

