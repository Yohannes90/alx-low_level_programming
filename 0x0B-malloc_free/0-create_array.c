#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initalize
 * @size: size of array to be created
 * @c: character to initalize it with
 *
 * Return: Null if size 0, or pointer if size > 0.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = NULL;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(*ptr) * size);
	if (ptr == NULL)
	{
		return (ptr);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
