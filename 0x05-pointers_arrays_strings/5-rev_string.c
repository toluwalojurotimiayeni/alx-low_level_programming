#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: This is the string to be reversed
 */

void rev_string(char *s)
{
	int n = 0;
	int m;
	int p;
	char q;

	while (s[n] != '\0')
	{
		n++;
	}
	p = n - 1;

	for (m = 0; p >= 0 && m < p; p--, m++)
	{
		q = s[m];
		s[m] = s[p];
		s[p] = q;
	}
}
