#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - A function that returns a pointer to a 2
 * dimensional array of integers
 * @width: This is the width of the array
 * @height: This is the heigth of the array
 * Return: NULL on failure, If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int **alloc;
	int x;
	int y;
	int length = width * height;

	if (length <= 0)
	{
		return (NULL);
	}

	alloc = (int **)malloc(sizeof(int *) * height);
	if (alloc == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		alloc[x] = (int *)malloc(sizeof(int) * width);
		if (alloc[x] == NULL)
		{
			for (x--; x >= 0; x--)
				free(alloc[x]);
			free(alloc);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
		for (y = 0; y < width; y++)
			alloc[x][y] = 0;
	return (alloc);
}
