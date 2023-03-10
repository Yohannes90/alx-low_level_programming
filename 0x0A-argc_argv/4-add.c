#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds postive numbers
 * @argc: argument count (loop bound)
 * @argv: argument vector (numbers to be added)
 *
 * Return: 0 if successful, or 1 if args are not digits
 */
int main(int argc, char *argv[])
{
	int i, sum;
	unsigned int j;

	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; j < strlen(argv[i]); j++)
			{
				if (argv[i][j] < 48 || argv[i][j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
