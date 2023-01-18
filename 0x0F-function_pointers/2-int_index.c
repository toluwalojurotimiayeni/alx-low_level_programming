#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer
 * @array: This is the array function
 * @size: This is the number of elements in the array array
 * @cmp: This is a pointer to the function to be used to compare values
 * Return: the index of the first element for which the cmp function
 * does not return 0, f no element matches, return -1, If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (x < size)
			{
				if (cmp(array[x]))
					return (x);

				x++;
			}
		}
	}
	return (-1);
}
