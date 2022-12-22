#include "main.h"

/**
 * string_toupper - A function that changes all lowercase letters
 * of a string to uppercase
 * @s: A string
 * Return: s
 */

char *string_toupper(char *s)
{
	int n = 0;

	while (*(s + n))
	{
		if (*(s + n) >= 'a' && *(s + n) <= 'z')
			*(s + n) -= 'a' - 'A';
		n++;
	}
	return (s);
}
