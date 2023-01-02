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
	int x = 0;
	int y = 0;
	int z
	int m

	for (z = 0; z < size; z++)
	{
		m = (z * size) + z;
		x += a[m];
	}
	for (z = 1; z <= size; z++)
	{
		m = (z * size) - z;
		y += a[m];
	}
	printf("%d, %d\n", x, y);
}
