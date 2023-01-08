#include <stdio.h>

/**
 * main - A program that prints all arguments it receives
 * @argc: This is the argument count
 * @argv: This is the argument
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);

	return (0);
}
