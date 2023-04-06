#include "main.h"

/**
 * flip_bits - returns the number of bits required to get from one to other
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip to get from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int long count = 0;
	unsigned long int k = n ^ m;

	while (k)
	{
		count += k & 1;
		k >>= 1;
	}
	return (count);
}
