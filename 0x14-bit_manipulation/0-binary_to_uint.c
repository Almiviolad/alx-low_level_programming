#include "main.h"
/**
 * binary_to_uint - convert binary to decimal.
 * @b: the binary number in string format
 * Description: convert binary to decimal
 * section header: the header of this function is header.h
 * Return: this return the convert number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, base = 1;
	int i = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i--; i >= 0; i--)
	{
		if (b[i] == '1')
			dec += base;
		base *= 2;
	}
	return (dec);
}
