#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* free_grid - rfrees a 2 dimensional grid
* @grid: array grid
* @height: height of array
*/

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		free(grid);
	for (i = 0; i < height; i++)
		free(grid[i]);
		free(grid);
}
