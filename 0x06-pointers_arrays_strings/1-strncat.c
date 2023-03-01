#include "main.h"
#include <stddef.h>

/**
 * _strncat - concatinate two strings
 * @dest: pointer to first string to add src on
 * @src: pointer to string to concatenate to dest
 * @n: bytes from src to ues most
 *
 * Return: Amended dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length_d, i;

	length_d = 0;
	i = 0;
	while (dest[i++])
	{
		length_d++;
	}
	for (i = 0; i < n; i++)
	{
		dest[length_d++] = src[i];
	}
	return (dest);
}
