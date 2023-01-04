#include "main.h"

/**
 * root - This checks for the square root of the number
 * @x: This is the first integer
 * @y: This is the second integer
 * Return: The number
 */

int root(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}
	if (x * x > y)
	{
		return (-1);
	}
	return (root(x + 1, y));
}

/**
 * _sqrt_recursion - A function that returns the natural square
 * root of a number
 * @n: This is the number to be checked
 * Return: The natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (root(1, n));
}
