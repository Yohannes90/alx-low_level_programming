#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimentional array of integers
 * @width: number of elements from left to right
 * @height: number elements form top to down
 *
 * Return: if successful pointer or NULL if not
 */
int **alloc_grid(int width, int height)
{
	int **array = NULL;
	int i, j, length;

	length = width * height;

	if (length <= 0)
	{
		return (array);
	}
	array = malloc(sizeof(int *) * width);
	if (array == NULL)
	{
		return (array);
	}
	for (i = 0; i < height ; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(array[i]);
			}
			free(array);
			return (array);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}


