#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints min number of coin to make change for money
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if successful, or 1 if not
 */
int main(int argc, char *argv[])
{
	int c, coins;

	coins = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	c = atoi(argv[1]);
	while (c > 0)
	{
		coins++;
		if ((c - 25) >= 0)
		{
			c -= 25;
			continue;
		}
		if ((c - 10) >= 0)
		{
			c -= 10;
			continue;
		}
		if ((c - 5) >= 0)
		{
			c -= 5;
			continue;
		}
		if ((c - 2) >= 0)
		{
			c -= 2;
			continue;
		}
		c--;
	}
	printf("%d\n", coins);
	return (0);
}
