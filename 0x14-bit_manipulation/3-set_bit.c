#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the given number
 * @index: is the index to set the value of a bit to 1
 *
 * Return: 1 if successful, or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int *bit_at_index = n;

	if (index > 64)
	{
		return (-1);
	}
	*bit_at_index = (1 << index) | *n;
	return (1);
}
