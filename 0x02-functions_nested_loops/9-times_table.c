#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, ij;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			ij = i * j;
			if (ij <= 9)
			{
				if (j > 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(ij + '0');
				if (j < 9)
				{
					_putchar(',');
				}
			}
			else
			{
				_putchar(' ');
				_putchar((ij / 10) + '0');
				_putchar((ij % 10) + '0');
				if (j < 9)
				{
					_putchar(',');
				}
			}
		}
		_putchar('\n');
	}
}
