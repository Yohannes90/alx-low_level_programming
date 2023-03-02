#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to an array to be reversed
 * @n: The number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
