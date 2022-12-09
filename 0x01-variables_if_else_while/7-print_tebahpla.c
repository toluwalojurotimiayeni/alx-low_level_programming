#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse, only use the putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char rev_alphabet;

	for (rev_alphabet = 'z'; rev_alphabet >= 'a'; rev_alphabet--)
		putchar(rev_alphabet);

	putchar('\n');

	return (0);
}
