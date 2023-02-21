#include "main.h"

/**
 * jack_bauer - prints every minute of the day from 00:00 to 23:59.
 *
 * Return: void
 */
void jack_bauer(void)
{
	char i, j, k, l;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i == 2 && j > 3)
			{
				continue;
			}
			for (k = 0; k <= 5; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
				}
			}
		}
	}
}
