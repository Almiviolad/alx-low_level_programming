#include "main.h"
/**
 *_abs- print the absolute value of a number
 *@c:the number to be checked
 *
*Return: absolute value of number
 *
 */
int _abs(int c)
{
	if (c < 0)
	{
		int absolute;

		absolute = c * -1;

		return (absolute);
	}

	return (c);
}
