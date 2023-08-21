#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: array of characters to be counted
 *
 * Return: Length of characters
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s++)
	{
		length++;
	}

	return (length);
}
