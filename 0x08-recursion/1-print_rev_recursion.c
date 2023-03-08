#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to string to printed
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	if (*s == 'n')
	{
		if (*(s - 1) == 92)
		{
			return;
		}
	}
	_putchar(*s);
}
