#include "main.h"

/**
 * _strcat - A function that concatenates two strings
 * @dest: A string
 * @src: A string
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *n = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (n);
}
