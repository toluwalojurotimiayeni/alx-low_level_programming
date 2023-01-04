#include "main.h"

/**
 * wild - A function that checks if two string is identical
 * @s1: The first string
 * @s2: The second string
 * @x: Position one
 * @y: Position two
 * Return: 1 if it is right and 0 otherwise
 */

int wild(char *s1, char *s2, int x, int y)
{
	if (s1[x] == '\0' && s2[y] == '\0')
	{
		return (1);
	}
	if (s1[x] == s2[y])
	{
		return (wild(s1, s2, x + 1, y + 1));
	}
	if (s1[x] == '\0' && s2[y] == '*')
	{
		return (wild(s1, s2, x, y + 1));
	}
	if (s2[y] == '*')
	{
		return (wild(s1, s2, x + 1, y) || wild(s1, s2, x, y + 1));
	}
	return (0);
}

/**
 * wildcmp - A function that compares two strings and returns 1 if the
 * strings can be considered identical, otherwise return 0
 * @s1: This is the first string
 * @s2: This is the second string
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	return (wild(s1, s2, 0, 0));
}
