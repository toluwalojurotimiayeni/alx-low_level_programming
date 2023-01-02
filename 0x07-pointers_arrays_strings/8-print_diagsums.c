#include "main.h"

/**
 * print_diagsums - A function that prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: The pointer
 * @size: The size
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int x;
	int y;
	int z;
	int n = 0;
	int m = 0;

	for (x = 0; x < size; x++)
	{
		z = (x * size) + x;
		n += *(a + z);
	}
	for (y = 0; y < size; y++)
	{
		z = (y * size) + (size - 1 - y);
		m += *(a + z);
	}
	printf("%i, %i\n", n, m);
}
