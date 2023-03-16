#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: min bound included in the array(self included)
 * @max: max bound included in the array(self included)
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr = NULL;
	int length, i;

	if (min > max)
	{
		return (NULL);
	}
	length = max - (min - 1);
	ptr = malloc(sizeof(int) * length);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
