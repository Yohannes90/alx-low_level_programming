#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to string to be apended on
 * @src: pointer to string to be concatenated to *dest
 *
 * Return: dest(apended)
 */
char *_strcat(char *dest, char *src)
{
	int i, length_d, length_s;

	length_d = 0;
	while (dest[length_d] != '\0')
	{
		length_d++;
	}
	length_s = 0;
	while (src[length_s] != '\0')
	{
		length_s++;
	}

	for (i = 0; i <= length_s + 1; i++)
	{
		*(dest + length_d++) = *(src + i);
	}
	return (dest);
}

