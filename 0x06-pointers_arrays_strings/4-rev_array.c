#include "main.h"

/**
 * reverse_array - A function that reverses the content of an array
 * of integers
 * @a: This is the array
 * @n: This is the number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; (x < (n - 1) / 2); x++)
	{
		y = a[x];
		a[x] = a[n - 1 - x];
		a[n - 1 - i] = y;
	}
}
