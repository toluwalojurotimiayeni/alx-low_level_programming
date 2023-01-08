#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiplies two numbers
 * @argc: This is the argument count
 * @argv: This is the argument
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int x;
	int y;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", x * y);

	return (0);
}
