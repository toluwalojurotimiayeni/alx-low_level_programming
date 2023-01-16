#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - A function that creates a new dog
 * @name: This is the name of the dog
 * @age: The Dog age
 * @owner: The owner of the dog
 * Return: Return NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int new;
	unsigned int old;
	unsigned int x;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (new = 0; name[new]; new++)
		;
	new++;
	dog->name = malloc(new * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (x = 0; x < new; x++)
		dog->name[x] = name[x];
	dog->age = age;
	for (old = 0; owner[old]; old++)
		;
	old++;
	dog->owner = malloc(old * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (x = 0; x < old; x++)
		dog->owner[x] = owner[x];
	return (dog);
}
