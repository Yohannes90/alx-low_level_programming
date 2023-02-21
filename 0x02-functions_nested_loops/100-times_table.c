#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints n times table, starting with 0.
 * @n: The lower and upper bound of table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, ij;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				ij = i * j;
				if (j == 0)
				{
					_putchar(ij + '0');
				}
				else if (ij < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(ij + '0');
				}
				else if (ij < 100)
				{
					_putchar(' ');
					_putchar(ij / 10 + '0');
					_putchar(ij % 10 + '0');
				}
				else
				{
					_putchar(ij / 100 + '0');
					_putchar((ij - 100) % 10 + '0');
					_putchar(ij % 10 + '0');
				}
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
