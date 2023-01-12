#include "main.h"

/**
 * _calloc - A function that allocates memory for an array, using malloc
 * @nmemb: This is an array
 * @size: This is a byte
 * Return: a pointer to the allocated memory, f nmemb or size is 0,
 * then _calloc returns NULL, If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	char *y;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	y = malloc(nmemb * size);
	if (y == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < (nmemb * size); x++)
		y[x] = 0;
	return (y);
}
