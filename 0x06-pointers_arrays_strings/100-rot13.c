#include "main.h"

/**
 * rot13 - A function that encodes a string using rot13
 * @s: This is the string to be encoded
 * Return: s
 */

char *rot13(char *s)
{
	int n;
	int m;
	char x[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char y[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (n = 0; *(s + n); n++)
	{
		for (m = 0; m < 52; m++)
		{
			if (x[m] == *(s + n))
			{
				*(s + n) = y[m];
				break;
			}
		}
	}
	return (s);
}
