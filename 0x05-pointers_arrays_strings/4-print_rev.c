#include "main.h"

/**
 * print_rev - A function that prints a string, in reverse
 * @s: This is the string to be printed
 */

void print_rev(char *s)
{
	int n;
	int m = 0;

	while (s[m] != '\0')
		m++;

	for (n = m - 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
