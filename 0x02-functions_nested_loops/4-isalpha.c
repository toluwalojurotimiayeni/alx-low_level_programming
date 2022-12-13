#include "main.h"

/**
 * _isalpha - A function that checks for alphabetic character
 * @c: This is the function to be checked
 *
 * Return: 1 it is a letter, lowercase or uppercase and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
