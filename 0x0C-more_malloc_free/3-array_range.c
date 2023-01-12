#include "main.h"
#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers
 * @min: This is the minimum range
 * @max: This is the maximum range
 * Return: the pointer to the newly created array, If min > max, return NULL,
 * If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int x;
	int y;
	int *z;

	if (min > max)
	{
		return (NULL);
	}
	y = max - min + 1;

	z = malloc(sizeof(int) * y);
	if (z == NULL)
	{
		return (NULL);
	}
	for (x = 0; min <= max; x++)
		z[x] = min++;

	return (z);
}
