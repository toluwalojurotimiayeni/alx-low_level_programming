#include "main.h"

/**
 * factorial - A function that returns the factorial of a given number
 * @n: This is the given number
 * Return: The factorial of a given number
 */

int factorial(int n)
{
	int x = 0;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		x = n * factorial(n - 1);
	}

	return (x);
}
