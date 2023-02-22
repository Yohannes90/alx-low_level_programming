#include "main.h"

/**
 * positive_or_negative - check if a random number is positive or negative
 * @i: The nuber to be checked
 * Return: 0 (if sucessful)
 */
void positive_or_negative(int i)
{

	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
}
