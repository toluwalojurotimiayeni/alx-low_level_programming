#include "main.h"

/**
 * set_string - A function that sets the value of a pointer to a char.
 * @s: The pointer to change
 * @to: The string
 * Return: Always 0 (success)
 */

void set_string(char **s, char *to)
{
	*s = to;
}
