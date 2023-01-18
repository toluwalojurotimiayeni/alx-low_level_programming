#include "function_pointers.h"

/**
 * print_name - A function that prints a name
 * @name: This is the name
 * @f: This is the function of the name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
