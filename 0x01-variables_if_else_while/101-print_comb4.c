#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit0, digit1, digit2, b = 1;

	for (digit0 = 0; digit0 < 8; digit0++)
	{
		b++;
		for (digit1 = 1; digit1 < 9; digit1++)
		{
			for (digit2 = b; digit2 < 10; digit2++)
			{
				if (digit1 != digit2 && digit2 > digit1)
				{
					putchar((digit1 % 10) + '0');
					putchar((digit2 % 10) + '0');
				}
				if (digit0 == 7 && digit1 == 8 && digit2 == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
