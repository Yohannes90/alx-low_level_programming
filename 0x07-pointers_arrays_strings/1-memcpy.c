#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to be copied to
 * @src: pointer to copy from
 * @n: number of bytes to be copied
 *
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (src);
}
