#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatinate two strings.
 * @s1: string 1 to be concatinated
 * @s2: string 2 to be concatinated
 *
 * Return: conatinated string or Null on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j, l, len1, len2;

	j = len1 = len2 = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}
	l = len1 + len2;
	concat = malloc(sizeof(char) * (l + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= l; i++)
	{
		if (i <= len1)
		{
			concat[i] = s1[i];
		}
		if (i >= len1)
		{
			concat[i] = s2[j];
			j++;
		}
	}
	return (concat);
}
