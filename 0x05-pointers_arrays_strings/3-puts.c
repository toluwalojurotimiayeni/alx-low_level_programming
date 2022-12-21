#include "main.h"

/**
 * _puts - A function that prints a string, followed by a new line, to stdout
 * @str: The string to be put
 */

void _puts(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
