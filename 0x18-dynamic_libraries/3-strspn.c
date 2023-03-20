#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring
 * @s: The number of bytes in the initial segment
 * @accept: consist only of bytes
 * Return: the number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int x = 0;
	int y;
	int z;

	for (y = 0; s[y] != '\0'; y++)
	{
		if (s[y] != 32)
		{
			for (z = 0; accept[z] != '\0'; z++)
			{
				if (s[y] == accept[z])
					x++;
			}
		}
		else
		{
			return (x);
		}
	}
		return (x);
}
