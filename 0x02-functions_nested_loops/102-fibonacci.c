#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count;
	long n;
	long m;
	long sum;

	for (count = 0; count < 50; count++)
	{
		sum = n + m;
		printf("%lu", sum);

		n = m;
		m = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
