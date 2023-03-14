#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: pointer to string which is going to be split
 *
 * Return: poiter to array of words or NULL if fail
 */
char **strtow(char *str)
{
	*char ptr = NULL;
	int i, j, len word;

	i = word = 0;
	if (str == NULL || str == "")
	{
		return (NULL);
	}
	while (str[i++])
	{
		if (str[i] == ' ')
		{
			word++;
		}
	}

	return (ptr);
}
