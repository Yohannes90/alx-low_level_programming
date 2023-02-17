#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	char a, z;

	a = 'a';
	z = 'z';
	while (a <= z)
	{
		if ((a != 'e') && (a != 'q'))
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
