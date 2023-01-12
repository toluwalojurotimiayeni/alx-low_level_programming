#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - A function that allocates memory using malloc
 * @b: This is the allocated memory
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x == NULL)
	{
		exit(98);
	}
	return (x);
}
