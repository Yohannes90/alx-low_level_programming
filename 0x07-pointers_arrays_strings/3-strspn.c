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
	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				amount++;
				break;
			}
		}
	}
	return (++amount);
}
