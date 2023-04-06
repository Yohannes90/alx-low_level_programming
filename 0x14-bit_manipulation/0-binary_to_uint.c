#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: converted number or, if char not (1 or 0 in b) or b NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, in_decimal;

	in_decimal = 0;
	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		in_decimal = in_decimal * 2 + (b[i] - '0');
	}	        
	return (in_decimal);
}
