#include "main.h"
/**
 *_isupper-tells if a character is uppercase or not
 *@c: character to be tested
 *Return:1(upper) or 0(not upper)
 */
int _isupper(int c)
{
	char upper;

	if (c >= 65 && c <= 90)
	{
		upper = 1;
	}
	else
	{
		upper = 0;
	}
	return (upper);
}
