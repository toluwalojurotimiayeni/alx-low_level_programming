#include "main.h"

/**
 * _strlen_recursion - A function that returns the length of a string
 * @s: The string to be checked
 * Return: The length of a string
 */

int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s)
	{
		x++;
		x += _strlen_recursion(s + 1);
	}

	return (x);
}
