#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - A function that frees dogs
 * @d: This is the pointer to the structure
 * Return: Always 0 (Success)
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
