#include "main.h"

/**
 * puts2 - A function that prints every other character of a string,
 * starting with the first character
 * @str: This is the string to be checked
 * Return: Always 0 (Success)
 */

void puts2(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
		if (n % 2 == 0)
			_putchar(str[n]);
	_putchar('\n');
}
