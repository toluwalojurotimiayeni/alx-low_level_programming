#include <stdio.h>

/**
 * main - A program that prints the number of arguments passed into it
 * @argc: This is the argument count
 * @argv: This is the argument
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
