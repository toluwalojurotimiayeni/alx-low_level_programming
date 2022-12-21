#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 * @s: The string to be checked
 *
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int n = 0;

	for (; *s++;)
		n++;
	return (n);
}
