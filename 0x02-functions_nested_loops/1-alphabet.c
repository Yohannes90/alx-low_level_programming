#include "main.h"

/**
 * print_alphabet - prints alphabet letters in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char a, z;

	z = 'z';
	for (a = 'a'; a <= z; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
