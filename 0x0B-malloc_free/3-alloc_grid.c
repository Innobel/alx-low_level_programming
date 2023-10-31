#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Allocate memory for a 2D grid of integers and initialize to 0.
 *
 * @width: The number of columns in the grid.
 * @height: The number of rows in the grid.
 *
 * Return: A pointer to the newly allocated 2D grid. Returns NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * (height));

	if (array == NULL)
	{
		return (NULL);
		free(array);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);

		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array[i]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{array[i][j] = 0;
		}
	}

	return (array);
}
