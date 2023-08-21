#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to string
 * @accept: bytes to be checked in s
 *
 * Return: number of bytes in s which consist accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int amount;
	int i, j;

	amount = 0;
	for (i = 0; accept[i]; i++)
	{
		for (j = 0; s[j] != 32; j++)
		{
			if (accept[i] == s[j])
			{
				amount++;
			}
		}
	}
	return (amount);
}
