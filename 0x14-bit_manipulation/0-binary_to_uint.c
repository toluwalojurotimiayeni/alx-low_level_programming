#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number to an
 * unsigned int
 * @b: This is pointing to a string of 0 and 1 chars
 * Return: The converted number, or 0 if, there is one or more chars in the
 * string b that is not 0 or 1 and if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int j;

	j = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		j <<= 1;
		if (b[i] == '1')
			j += 1;
	}
	return (j);
}
