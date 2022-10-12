#include "function_pointers.h"
/**
  *array_iterator - a function that performs th func
  *passed to it on every element in an array
  *@array: the array to be acted on
  *@size: size of the array
  *@action: pointer to function
  *Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
