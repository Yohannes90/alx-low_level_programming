#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: points to memory to be filled
 * @b: constant byte
 * @n: number of bytes of the memory area
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
