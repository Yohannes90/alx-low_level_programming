#include <stdio.h>
#include <math.h>

/**
 * main - find and print the largest prime factor of the number 612852475143
 *
 * Return: 0 (if successful)
 */
int main(void)
{
	long i, n, maxf;

	n = 612852475143;
	for (i = 1; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			maxf = n / i;
		}
	}
	printf("%ld\n", maxf);
	return (0);
}
