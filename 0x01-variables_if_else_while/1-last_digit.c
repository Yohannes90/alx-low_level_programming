#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - a program that checks the last digit of a random number
 *
 * Return: 0 (if sucessful)
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	printf("Last digit of %d is %d", n, lastDigit);
	if (lastDigit > 5)
	{
		printf(" and is greater than 5\n");
	}
	else if (lastDigit < 6)
	{
		if (lastDigit == 0)
		{
			printf(" and is 0\n");
		}
		else
		{
			printf(" and is less than 6 and not 0\n");
		}
	}
	return (0);
}
