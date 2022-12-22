#include <stdio.h>

/**
 * main - A function that prints a[2] = 98
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int x[5];
	int *m;

	x[5] = 1024;
	m = &n;

	*(m + 5) = 98;

	printf("x[2] = %d\n", x[2]);

	return (0);
}
