#include "main"

/**
 * _realloc - A function that reallocates a memory block using malloc and free
 * @ptr: This is a pointer to the memory previously allocated with a
 * call to malloc
 * @old_size: This is the size, in bytes, of the allocated space for ptr
 * @new_size: This is the new size, in bytes of the new memory block
 * Return: f new_size == old_size do not do anything and return ptr,
 * If new_size is equal to zero, and ptr is not NULL, then the call is
 * equivalent to free(ptr). Return NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int x;
	unsigned int y = new_size;
	char *z;
	char *i = ptr;

	if (ptr == NULL)
	{
		z = malloc(new_size);
		return (z);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	z = malloc(new_size);
	if (z == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
		y = old_size;
	for (x = 0; x < y; x++)
		z[x] = i[x];
	free(ptr);
	return (z);
}
