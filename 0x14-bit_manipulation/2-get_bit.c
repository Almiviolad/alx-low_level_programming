#include "main.h"
/**
*get_bit - get the bit at indexth position
*@n: the number to be changed to bits
*@index:index of the bit to be returned
*Return: bit at index(sucess) or -1(fail)
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit, bit_value;

		bit = n >> index;
		bit_value = bit & 1;
		if (index > 64)
			return (-1);
		return (bit_value);
	return (-1);
}
