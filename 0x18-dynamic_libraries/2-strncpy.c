#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: pointer to string dest
 * @src: pointer to string src
 * @n: number of src char to be copied
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, length;

	i = 0;
	length = 0;
	while (src[i++])
	{
		length++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = length; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
