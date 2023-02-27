#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: first address
 * @b: second address
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
