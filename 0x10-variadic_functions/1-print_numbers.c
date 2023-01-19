#include "variadic_functions.h"

/**
 * print_numbers - A function that prints strings, followed by a new line
 * @n: This is the number of strings passed to the function
 * @separator: This is the string to be printed between the strings
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list list;

	va_start(list, n);

	if (separator == NULL)
		separator = "";

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(list, int));
		if (x < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
