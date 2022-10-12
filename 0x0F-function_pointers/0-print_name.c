#include "function_pointers.h"
/**
 *print_name - prints the name passed
 *@name: pointer to name
 *@f: pointer to function
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
