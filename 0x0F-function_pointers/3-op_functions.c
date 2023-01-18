#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Addition
 * @a: This is an integer
 * @b: This is an integer
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtraction
 * @a: This is an integer
 * @b: This is an integer
 * Return: the subtraction of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplication
 * @a: This is an integer
 * @b: This is an integer
 * Return: The product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division
 * @a: This is an integer
 * @b: This is an integer
 * Return: the result of the division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Modulus
 * @a: This is an integer
 * @b: This is an integer
 * Return: the remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
