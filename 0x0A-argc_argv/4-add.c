#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that adds positive numbers
 * @argc: This is the argument count
 * @argv: This is the argument
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int x;
	int y;
	int add = 0;
	char *num;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (x = 1; argv[x]; x++)
	{
		y = strtol(argv[x], &num, 10);
		if (*num)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			add += y;
		}
	}
	printf("%d\n", add);

	return (0);
}
