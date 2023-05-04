#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to a given number
 * @index: is the index to set the value of a bit to 0
 *
 * Return: 1 if it worked, or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int *bit_at_index = n;

	if (index > 64)
	{
		return (-1);
	}
	*bit_at_index = ~(1 << index) & *n;
	return (1);
}
