#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - A function that frees a 2 dimensional grid previously created
 * by your alloc_grid function
 * @grid: This is the grid
 * @height: This is the height of the array
 * Return: Always 0 (Success)
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
