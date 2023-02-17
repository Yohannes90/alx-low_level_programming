#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return: 0 (if sucessful)
 */
int main(void)
{
	char a, z, A, Z;

	a = 'a';
	z = 'z';
	A = 'A';
	Z = 'Z';
	while (a <= z)
	{
		putchar(a);
		a++;
	}
	while (A <= Z)
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
