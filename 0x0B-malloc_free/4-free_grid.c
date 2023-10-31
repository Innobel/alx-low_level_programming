#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid previously allocated b alloc_grid
 * @grid: A pointer to the 2D grid to be freed
 * @height: The number of rows in the grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
