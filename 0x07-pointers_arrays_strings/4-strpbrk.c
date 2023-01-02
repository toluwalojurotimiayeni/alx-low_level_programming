#include "main.h"

/**
 * _strpbrk - A function that searches a string for any of a set of bytes
 * @s: The first occurrence in the string
 * @accept: A string
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accpet[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return (NULL);
}
