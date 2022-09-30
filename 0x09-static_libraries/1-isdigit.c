#include "main.h"
/**
*_isdigit - tests if a character is digit
*@c:char to be tested
*
*Description: compares to the ascii value to test if char is a digit
*Return: 1(digit) or 0(not digit)
*/
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
