#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 * @n: The first n bytes
 * @s: The memory area pointed to
 * @b: The constant byte
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		s[x] = b;
		x++;
	}

	return (s);
}
