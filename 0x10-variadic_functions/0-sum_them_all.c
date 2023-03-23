#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns all the sum of all its parameters
 * @n: one of the parameters to be added
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	sum = 0;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
