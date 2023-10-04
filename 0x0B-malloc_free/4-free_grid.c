#include "main.h"

/**
 * free_grid - function
 * @grid: input
 * @height: input
 */

void free_grid(int **grid, int height)
{
	int z = 0;

	for (z = 0; z < height; z++)
	{
		free(grid[z]);
	}
	free(grid);
}
