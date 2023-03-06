#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to string
 * @c: character to be located
 *
 * Return: pointer to the first occerence of c in s, null if not found
 */
char *_strchr(char *s, char c)
{
	int i;
	char *occerence = '\0';

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			occerence = &s[i];
			return occerence;
		}
	}

	return (occerence);
}
