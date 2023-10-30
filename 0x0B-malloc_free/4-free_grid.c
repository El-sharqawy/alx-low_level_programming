#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: input 2D array
 * @height: number of columns
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
