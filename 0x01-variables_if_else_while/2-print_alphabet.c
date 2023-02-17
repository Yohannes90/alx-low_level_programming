#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line.
 *
 * Return: 0 (if successful)
 */
int main(void)
{
	char a;
	char z;

	a = 'a';
	z = 'z';
	while (a <= z)
	{
		putchar(a);
		putchar('\n');
		a++;
	}
	return (0);
}
