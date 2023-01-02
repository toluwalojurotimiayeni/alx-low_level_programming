#include "main.h"

/**
 * _memcpy - A function that copies memory area
 * @n: The number of bytes
 * @src: The memory area
 * @dest: The memory area copied to
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}

	return (dest);
