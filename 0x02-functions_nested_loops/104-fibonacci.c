#include <stdio.h>

/**
 * main - A program that finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count;
	unsigned long n = 0, m = 1, sum;
	unsigned long n_half1, n_half2, m_half1, m_half2, sum_half1, sum_half2;

	for (count = 0; count < 92; count++)
	{
		sum = n + m;
		printf("%lu, ", sum);

		n = m;
		m = sum;
	}

	n_half1 = n / 1000000000;
	n_half2 = n % 1000000000;
	m_half1 = m / 1000000000;
	m_half2 = m % 1000000000;

	for (count = 93; count < 99; count++)
	{
		sum_half1 = (n_half1 + m_half1);
		sum_half2 = (n_half2 + m_half2);
		if (n_half2 + m_half2 > 9999999999)
		{
			sum_half1 += 1;
			sum_half2 %= 10000000000;
		}

		printf("%lu%lu", sum_half1, sum_half2);
		if (count != 98)
			printf(", ");

		n_half1 = m_half1;
		n_half2 = m_half2;
		m_half1 = sum_half1;
		m_half2 = sum_half2;

	}
	printf("\n");
	return (0);
}
