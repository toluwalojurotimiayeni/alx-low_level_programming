#include "main.h"

/**
 * print_line - A function that draws a straight line in the terminal
 * @n: This is the number of times the character id printed
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('-');
	}
	_putchar('\n');
}
