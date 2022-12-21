#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers
 * @a: This is the first integer
 * @b: This is the second integer
 *
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
