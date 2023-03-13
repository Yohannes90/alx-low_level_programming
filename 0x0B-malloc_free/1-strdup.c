#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - return pointer to newly allocated space in memory
 * @str: pointer to copy of string given as a parameter
 *
 * Return: pointer if successful pointer or NULL if not
 */
char *_strdup(char *str)
{
	char *ptr = NULL;
	int i, length;

	i = 0;
	length = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}
	ptr = (char*)malloc((sizeof(char) * length) + 1);
	if (ptr == NULL)
	{
		return (ptr);
	}
	for (i = 0; i <= length; i++)
	{
		ptr[i] = str[i];
	}

	return (ptr);
}
