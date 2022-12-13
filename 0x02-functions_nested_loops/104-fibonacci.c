#include <stdio.h>

/**
 * main - A program that finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * Returns: Always 0 (Success)
 */

int main(void)
{
	int count, number;
	unsigned long n = 1;
	unsigned long m = 1;
	unsigned long sum = 0;
	long n_half1, n_half2, m_half1, m_half2, sum_half1, sum_half2;

	printf("1");

	for (count = 2; count < 93; count++)
	{
		sum = n + m;
		n = m;
		m = sum;
		printf(", %lu", sum);
	}

	n_half1 = n / 1000000000;
	n_half2 = n % 1000000000;
	m_half1 = m / 1000000000;
	m_half2 = m % 1000000000;

	for (; count < 99; count++)
	{
		number = (n_half2 + m_half2) / 1000000000;
		sum_half1 = (n_half2 + m_half2) - (1000000000 * number);
		sum_half2 = (n_half1 + m_half1) + number;

		printf(", %lu%lu", sum_half1, sum_half2);

		n_half1 = m_half1;
		n_half2 = m_half2;
		m_half1 = sum_half1;
		m_half2 = sum_half2;

	}

	printf("\n");

	return (0);
}
