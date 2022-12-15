#include <stdio.h>

/**
 * main - A function that finds and prints the largest prime factor of
 * the number 612852475143
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int n;
	unsigned long int m = 612852475143;

	for (n = 3; n < 782849; n = n + 2)
	{
		while ((m % n == 0) && (m != n))
			m = m / n;
	}
	printf("%lu\n", m);
	return (0);
}
