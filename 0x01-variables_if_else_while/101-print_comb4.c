#include <stdio.h>
/**
 * main - prints all possible different combinations of three digit numbers
 *
 * Return: 0 (if successful)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if ((i == 7) && (j == 8) && (k == 9))
				{
				break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
