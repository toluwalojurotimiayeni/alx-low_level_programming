#include <stdio.h>

/**
 * main - A program that finds and prints the sum of the even-valued terms
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int sum_of_evens = 0;
	int sum = 1;
	int n = 1;
	int m = 1;

	while (m < 4000000)
	{
		sum = n + m;
		n = m;
		m = sum;
		if ((sum < 4000000) && (sum % 2 == 0))
		{
			sum_of_evens += sum;
		}
	}
	printf("%d\n", sum_of_evens);

	return (0);
}
