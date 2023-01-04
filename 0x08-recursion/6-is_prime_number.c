#include "main.h"

/**
 * prime - This checks if it is a prime number
 * @x: This is the first integer
 * @y: this is the second integer
 * Return: The integer
 */

int prime(int x, int y)
{
	if (y < 2 || y % x == 0)
	{
		return (0);
	}
	else if (x > y / 2)
	{
		return (1);
	}
	else
	{
		return (prime(x + 1, y));
	}
}

/**
 * is_prime_number - A function that returns 1 if the input
 * integer is a prime number, otherwise return 0
 * @n: This is the number to be inputed
 * Return: 1 if the input integer is a prime number 0 otherwise
 */

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (prime(2, n));
}
