#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to first string to be concatinated
 * @s2: pointer to second string to be concatinated
 * @n: s2's number of bytes to be concatinated
 *
 * Return: pointer to concatinated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr = NULL;
	unsigned int i, j, len1, len2;

	j = len1 = len2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	if (n > len2)
		n = len2;
	ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1 + n; i++)
	{
		if (i <= len1)
			ptr[i] = s1[i];
		if (i >= len1)
		{
			ptr[i] = s2[j];
			j++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
