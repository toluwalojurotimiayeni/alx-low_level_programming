#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - A program that prints the opcodes of its own main function
 * @a: This is the address of the main function
 * @b: This is the number of byte
 */

void print_opcodes(char *a, int b)
{
	int x;

	for (x = 0; x < b; x++)
	{
		printf("%.2hhx", a[x]);
		if (x < b - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - A program that prints the opcodes of its own main function
 * @argc: argument counter
 * @argv: argument
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int x;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, x);
	return (0);
}
