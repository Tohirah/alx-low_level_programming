#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees memory previously allocated
 * @grid: array of integer
 * @height: height of the grid
 *
 * Return: return nothing
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
