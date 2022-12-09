#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase,
 * only use the putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	char alphabet;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
