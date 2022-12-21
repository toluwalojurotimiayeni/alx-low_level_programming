#include "main.h"

/**
 * _atoi - A function that convert a string to an integer
 * @s: the string to convert
 * Return: The integer
 */

int _atoi(char *s)
{
	int n = 0;
	unsigned int m = 0;
	int p = 1;
	int q = 0;

	while (s[n])
	{
		if (s[n] == 45)
		{
			p *= -1;
		}
		while (s[n] >= 48 && s[n] <= 57)
		{
			q = 1;
			m = (m * 10) + (s[n] - '0');
			n++;
		}
		if (q == 1)
		{
			break;
		}

		n++;

	}
	m *= p;
	return (m);
}
