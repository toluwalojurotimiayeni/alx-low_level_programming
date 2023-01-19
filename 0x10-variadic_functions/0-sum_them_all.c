#include "variadic_functions.h"

/**
 * sum_them_all - A function that returns the sum of all its parameters
 * @n: This is the number of parameters
 * Return: the sum of all its parameters, If n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int x;
	va_list list;

	va_start(list, n);

	if (n == 0)
		return (0);

	for (x = 0; x < n; x++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
