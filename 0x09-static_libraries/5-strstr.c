#include "main.h"

/**
 * _strstr - finds the first occerence of the sub string
 * @haystack: pointer to string to search substring from
 * @needle: substring to look for
 *
 * Return: pointer to the begining of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return ('\0');
}
