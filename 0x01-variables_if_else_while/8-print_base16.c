#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: 0 (if successful)
 */
int main(void)
{
	char a, f, n0, n9;

	a = 'a';
	f = 'f';
	n0 = 0;
	n9 = 9;
	while (n0 <= n9 || a <= f)
	{
		if (n0 <= n9)
		{
			putchar(n0 + '0');
			n0++;
		}
		else
		{
			putchar(a);
			a++;
		}
	}
	putchar('\n');
	return (0);
}
