#include "main.h"

/**
 * puts_half - A function that prints half of a string
 * @str: This is the half string to be printed
 */

void puts_half(char *str)
{
	int n = 0;
	int m;

	while (str[n] != '\0')
		n++;
	if (n + 1 % 2 != '0')
	{
		m = (n - 1) / 2;
	}
	else
		m = n / 2;
	m++;

	for (n = m; str[n] != '\0'; n++)
		_putchar(str[n]);
	_putchar('\n');
}
