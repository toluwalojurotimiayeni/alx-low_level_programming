#include <unistd.h>

/**
 * _putchar - A function that writes the character to stdout
 * @c: This is the characted to be inputed
 * Return: 1 on Success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
