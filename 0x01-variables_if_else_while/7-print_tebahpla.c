#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: 0 (if successful)
 */
int main(void)
{
	char a, z;

	a = 'a';
	z = 'z';
	while (z >= a)
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
