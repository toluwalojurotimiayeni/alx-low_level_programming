#include "main.h"

/**
 * _strlen - A function that prints the length of a string
 * @s: This is the string to be rinted
 * Return: The length of the string
 */

int _strlen(char *s)
{
	if (s[0] != '\0')
	{
		return (1 + _strlen(s + 1));
	}
	return (0);
}

/**
 * drome - A function that checks if s is palindrome
 * @s: This is a string
 * @x: The first integer
 * @y: The second integer
 * Return: 1 if s is palindrome, 0 otherwise
 */

int drome(char *s, int x, int y)
{
	if (s[x] == s[y])
		if (x > y / 2)
		{
			return (1);
		}
		else
		{
			return (drome(s, x + 1, y - 1));
		}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - A function that returns 1 if a string
 * is a palindrome and 0 if not
 * @s: This is the string
 * Return: 1 if the string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	return (drome(s, 0, _strlen(s) - 1));
}
