#include "main.h"

/**
 * print_square - A function that prints a square
 * @size: the size of the square
 */

void print_square(int size)
{
	int n;
	int m;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (n = 0; n < size; n++)
		{
			for (m = 0; m < size; m++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
