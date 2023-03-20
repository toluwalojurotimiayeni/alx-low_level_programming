#include "main.h"
#define  NULL 0

/**
 * _strpbrk - A function that searches a string for any of a set of bytes
 * @s: The first occurrence in the string
 * @accept: A string
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
