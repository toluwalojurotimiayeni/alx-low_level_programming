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
	char *x;
	unsigned int y;

	if (nmemb == 0 || size == 0)
		return (NULL);
	x = malloc(nmemb * size);
	if (x == NULL)
		return (NULL);
	for (y = 0; y < (nmemb * size); y++)
		x[y] = 0;
	return (x);
}
