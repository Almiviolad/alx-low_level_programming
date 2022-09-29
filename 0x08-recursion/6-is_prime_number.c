#include "main.h"
/**
 *check_divisibility - check if the number is
 *@n:number to be checked
 *@divisor: number to divide the number we are checking
 *Return: 1(prime) or 0(not prime)
 */
int check_divisibility(int n, int divisor)
{
	if (n == divisor)
	{
		return (1);
	}
	else if (n % divisor == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (check_divisibility(n, divisor + 1));
	}
}
/**
 *is_prime_number - checjs if a numbr is prime
 *divisible by divisor
 *@n: value to be checked
 *Return: 1(prime) or 0(not prime)
 */
int is_prime_number(int n)
{
	return (check_divisibility(n, 2));
}
