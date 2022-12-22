#include "main.h"

/**
 * leet - A function that encodes a string into 1337
 * @s: This is the string to be encoded
 * Return: s
 */

char *leet(char *s)
{
	int n;
	int m;
	char x[] = "aAeEoOtTlL";
	char y[] = "4433007711";

	for (n = 0; *(s + n); n++)
	{
		for (m = 0; m <= 9; m++)
		{
			if (x[m] == s[n])
				s[n] = y[m];
		}
	}
	return (s);
}
