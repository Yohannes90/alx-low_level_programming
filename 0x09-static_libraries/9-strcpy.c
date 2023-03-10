#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: pointer to copy string to
 * @src: pointer to copy string from
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int length;

	length = 0;
	while (src[length] != '\0')
	{
		dest[length] = src[length];
		length++;
	}
	dest[length] = src[length];

	return (dest);
}
