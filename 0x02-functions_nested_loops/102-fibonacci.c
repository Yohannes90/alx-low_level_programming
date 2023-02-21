#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: void
 */
int main(void)
{
	int i;
	long int v1, v2, result;

	v1 = v2 = 1;
	for (i = 1; i <= 50; i++)
	{
		result = v1 + v2;
		v1 = v2;
		v2 = result;
		printf("%lu", result);
		if (i < 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
