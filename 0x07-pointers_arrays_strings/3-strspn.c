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
	unsigned int i, j, amount;

	amount = 0;
	for (i = 0; accept[i]; i++)
	{
		for (j = 0; s[j]; j++)
		{
			if (accept[i] == s[j])
			{
				amount++;
				break;
			}
		}
	}
	amount++;
	return (amount);
}
