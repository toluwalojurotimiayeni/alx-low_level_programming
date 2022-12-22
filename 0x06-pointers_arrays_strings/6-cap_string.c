#include "main.h"

/**
 * cap_string - A function that capitalizes all words of a string
 * @s: This is the string to be checked
 * Return: s
 */

char *cap_string(char *s)
{
	int n = 0;
	int m;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(s + n))
	{
		if (*(s + n) >= 'a' && *(s + n) <= 'z')
		{
			if (n == 0)
				*(s + n) -= 'a' - 'A';
			else
			{
				for (m = 0; m <= 12; m++)
				{
					if (a[m] == *(s + n - 1))
						*(s + n) -= 'a' - 'A';
				}
			}
		}
		n++;
	}
	return (s);
}
