#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - A function that concatenates all the arguments of your program
 * @ac: This is the argument count
 * @av: This is the argument
 * Return: NULL if ac == 0 or av == NULL, a pointer to a new string
 * or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int x;
	int y;
	int z;
	int length = 0;
	char *string;
	char *arg;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < ac; x++)
	{
		arg = av[x];
		y = 0;

		while (arg[y++])
			length++;
		length++;
	}
	arg = (char *)malloc(sizeof(char) * (length + 1));
	if (arg == NULL)
		return (NULL);
	for (x = 0, y = 0; x < ac && y < length; x++)
	{
		arg = av[x];
		z = 0;

		while (arg[z])
		{
			string[y] = arg[z];
			z++;
			y++;
		}
		string[y++] = '\n';
	}
	string[y] = '\0';

	return (string);
}
