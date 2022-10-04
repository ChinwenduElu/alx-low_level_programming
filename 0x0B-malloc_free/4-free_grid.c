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
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
			free(grid);
	}
}
