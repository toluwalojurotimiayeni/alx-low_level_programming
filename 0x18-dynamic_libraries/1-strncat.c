#include "main.h"

/**
 * _strncat - A function that concatenates two strings
 * @dest: A string
 * @src: A string
 * @n: The integer
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int m;

	for (x = 0; dest[x] != '\0'; x++)
	{
		continue;
	}
	for (m = 0; src[m] != '\0' && m < n; m++)
	{
		dest[x + m] = src[m];
	}
	dest[x + m] = '\0';
	return (dest);
}
