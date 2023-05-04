#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: given number
 * @index: is the index
 *
 * Return: the value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_at_index;

	if (index > 64)
	{
		return (-1);
	}
	bit_at_index = (n >> index) & 1;
	return (bit_at_index);
}
