#include "main.h"

/**
 * _sqt_recursion - returns the natural squareroot of a number
 * @n: number to be squarerooted
 *
 * Return: natural square root of n or -1 if it doesn't have one
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - calculate natural square root
 * @n: number to be squaredrooted
 * @i: itration
 *
 * Return: natural squre root of n
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}
	if (sqrt == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
