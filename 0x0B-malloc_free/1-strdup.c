#include "main.h"
#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter
 * @str: This is a string
 * Return: NULL if str = NULL, a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *strd;
	int x;
	int length = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
		length++;

	strd = (char *)malloc((sizeof(char) * length) + 1);
	if (strd == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < length; x++)
		strd[x] = str[x];
	strd[length] = '\0';

	return (strd);
}
