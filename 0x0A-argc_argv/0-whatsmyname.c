#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints its name, followed by a new line
 * @argc: This counts the arguments
 * @argv: This is the argument
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
