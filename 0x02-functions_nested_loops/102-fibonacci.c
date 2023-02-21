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

	v1 = 0;
	v2 = 1;
	for (i = 0; i < 50; i++)
	{
		result = v1 + v2;
		v1 = v2;
		v2 = result;
		printf("%lu", v2);
		if (i < 49)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
