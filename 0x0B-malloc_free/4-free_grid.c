#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimentional grid previously created
 * @grid: pointer to grid
 * @height: elements from top to down in the array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
