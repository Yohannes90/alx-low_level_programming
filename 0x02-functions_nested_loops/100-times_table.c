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
	int i, j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				printf("%3d", i * j);
				if (j != n)
				{
					printf(", ");
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	else
	{
		printf("\n");
	}
}
