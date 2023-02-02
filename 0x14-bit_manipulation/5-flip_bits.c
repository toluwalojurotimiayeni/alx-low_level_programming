#include "main.h"

/**
 * flip_bits - A function that returns the number of bits you would need
 * to flip to get from one number to another
 * @n: This is the first number
 * @m: This is the second number
 * Return: The number of bits you would need to flip to get from
 * one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differnce, result;
	unsigned int x, y;

	x = 0;
	result = 1;
	difference = n ^ m;

	for (y = 0; y < (sizeof(unsigned long int) * 8); y++)
	{
		if (result == (differnce & result))
			x++;
		result <<= 1;
	}
	return (x);
}
