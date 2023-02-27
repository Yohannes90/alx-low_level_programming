#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array to be printed
 * @n: numbers of elements of the array to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int length, i;

	length = 0;
	while (a[length] != '\0')
	{
		length++;
	}
	for (i = 0; i <= n - 1; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
