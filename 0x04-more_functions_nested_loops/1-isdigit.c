#include "main.h"
/**
*_isdigit- tells if a char is a digitor not
*Description: show if a char is a digit, it returbs 1 if its a digit
*@c: tested character
*Return: 1 if it is, 0 otherwise
*/
int __isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}
