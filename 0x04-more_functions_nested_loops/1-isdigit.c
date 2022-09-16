#include "main.h"
/**
 *_isdigit-tells if a character is digit or not
 *Description:to test if a char us digit
 *@c:character to be tested
 *Return:1(digit) or 0(digit)
 */
int __isdigit(int c)
{
	int digit;

	if (c >= 48 && c <= 57)
	{
		digit = 1;
	}
	else
	{
		digit = 0;
	}
	return (digit);
}
