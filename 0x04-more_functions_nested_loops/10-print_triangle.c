#include "main.h"

/**
 * print_triangle - A function that prints a triangle
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int n;
	int m;
	int h;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (n = 1; n <= size; n++)
		{
			for (m = 1; m <= (size - n); m++)
			{
				_putchar(' ');
			}
			for (h = 1; h <= n; h++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
