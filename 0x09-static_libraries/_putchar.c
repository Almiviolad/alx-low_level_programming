#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints a char
 *
 * Return: Always 0 (Succes2xs)
 */
int _putchar(char c)
{
	
	return (write(1, &c, 1));
}
