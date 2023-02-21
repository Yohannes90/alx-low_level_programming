#include <stdio.h>

/**
 * main - finds and prints the sum of even-valued terms
 *
 * Return: 0 Always.
 */
int main(void)
{
	int v1, v2, result, sum, i;

	v1 = 0;
	v2 = 1;
	sum = 0;
	for (i = 0; i < 32; i++)
	{
		result = v1 + v2;
		v1 = v2;
		v2 = result;
		if (result % 2 == 0)
		{
			sum = sum + result;
		}
	}
	printf("%d\n", sum);
	return (0);
}
