#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string input
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length, i;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 != 0)
	{
		for (i = (length - 1) / 2; i <= length; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	else
	{
		for (i = length / 2; i <= length; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
