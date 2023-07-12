#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - A function that frees a 2 dimensional
 *	       grid
 *
 * @grid: The address of the two dimensional grid
 * @height: height of the grid
 *
 * Return: Nothing
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
