#include "main.h"

/**
 * _strncpy - A function that copies a string
 * @dest: A string
 * @src: A string
 * @n: An integer
 * Return: A pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int m;

	for (m = 0; m < n && *(src + m); m++)
	{
		*(dest + m) = *(src + m);
	}
	for (; m < n; m++)
	{
		*(dest + m) = '\0';
	}
	return (dest);
}
