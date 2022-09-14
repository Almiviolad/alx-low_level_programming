#include "main.h"

/**
  * _islower - To check if a charcter is lowercase
  * @c: The character to be checked
  *
  * Return: 1 for lowercase character or 0 if not
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
