#include "function_pointers.h"

/**
 * array_iterator - A function that executes a function given as
 * a parameter on each element of an array
 * @array: This is the array function
 * @size: This is the size of the array
 * @action: This is a pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array && action)
	{
		x = 0;
		while (x < size)
		{
			action(array[x]);
			x++;
		}
	}
}
