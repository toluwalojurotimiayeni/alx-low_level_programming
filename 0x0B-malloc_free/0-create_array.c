#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars,
 * and initializes it with a specific char
 * @size: This is the size of the array
 * @c: This is the value to be inputed
 * Return: NULL if size = 0, and a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(sizeof(char) * size);


	if (array == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
		array[x] = c;

	return (array);
}
