#include "main.h"

/**
 * factorial - returns the fatorial of a given number
 * @n: given number
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n == 0 || n== 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial (n - 1));
}


