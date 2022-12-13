#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count;
	unsigned long n = 1;
	unsigned long m = 2;
	unsigned long sum = 50;

	for (count = 1; count <= (sum / 2); count++)
	{
		printf("%li %li ", n, m);

		n += m;
		m += n;
	}
	if (sum % 2 == 1)
		printf("%li", n);

	printf("\n");

	return (0);
}
