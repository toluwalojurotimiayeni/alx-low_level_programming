#include "dog.h"

/**
 * init_dog - A function that initialize a variable of type struct dog
 * @d: This is the pointer to the structure
 * @name: This is the name of the dog
 * @age: Age of the dog
 * @owner: Owner of the Dog
 * Return: Always 0 (Success)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
