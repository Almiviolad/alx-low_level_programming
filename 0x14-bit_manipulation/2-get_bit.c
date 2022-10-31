#include "main.h"
/**
*get_bit - get the bit at indexth position
*@n: the number to be changed to bits
*@index:index of the bit to be returned
*Return: bit at index(sucess) or 0(fail)
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit, bit_value;

	if (n && index)
	{
		bit = n >> index;
		bit_value = bit & 1;
		if (!bit || !bit_value)
			return (-1);
		return (bit_value);
	}
	return (-1);
}
