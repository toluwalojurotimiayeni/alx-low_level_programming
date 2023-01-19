#include "variadic_functions.h"

/**
 * print_strings - A function that prints strings, followed by a new line
 * @separator: This is the string to be printed between the strings
 * @n: This is the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *s;
	va_list list;

	if (n > 0)
	{
		va_start(list, n);
		for (x = 1; x <= n; x++)
		{
			s = va_arg(list, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);

			if (x != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(list);
	}
	printf("\n");
}
