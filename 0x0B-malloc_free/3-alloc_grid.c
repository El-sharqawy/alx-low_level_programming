#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: number of rows
 * @height: number of columns
 * Return: returns a pointer to a 2 dimensional array of integers or NULL.
 */
int **alloc_grid(int width, int height)
{
	int **my_grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	my_grid = (int **)malloc(height * sizeof(int *));

	if (my_grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		my_grid[i] = (int *)malloc(width * sizeof(int));
		if (my_grid[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			my_grid[i][j] = 0;
		}
	}

	return (my_grid);
}
