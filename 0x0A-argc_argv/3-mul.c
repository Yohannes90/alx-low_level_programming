#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of two numbers
 * @argc: argument count
 * @argv: argument vector (multiples)
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int product;

	if (argc > 1 && argc < 4)
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
