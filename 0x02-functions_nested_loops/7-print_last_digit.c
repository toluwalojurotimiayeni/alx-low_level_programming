#include "main.h"

/**
 * print_last_digit - A function that prints the last digit of a number
 * @n: This is the number to be checked
 *
 * Return: n, the value of the last number
 */

int print_last_digit(int n)
{
	int lastdigit = n % 10;

	if (lastdigit < 0)
		lastdigit *= -1;

	_putchar(lastdigit + '0');

	return (lastdigit);
}
