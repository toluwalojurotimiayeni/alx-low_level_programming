#include "main.h"
#include "stdlib.h"
#include <stdio.h>

/**
 * str_concat - A function that concatenates two strings
 * @s1: This is the first string
 * @s2: This is the second string
 * Return: pointer that point to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2, and null
 * terminated, and NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int x;
	int y;
	int length, length1 = 0, length2 = 0;
	char *concat;

	if (s1 != NULL)
	{
		x = 0;
		while (s1[x++] != '\0')
			length1++;
	}
	if (s2 != NULL)
	{
		x = 0;
		while (s2[x++] != '\0')
			length2++;
	}

	length = length1 + length2;

	concat = (char *)malloc(sizeof(char) * (length + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < length1; x++)
		concat[x] = s1[x];
	for (y = 0; y < length2; y++; x++)
		concat[x] = s2[y];
	concat[length] = '\0';

	return (concat);
}
