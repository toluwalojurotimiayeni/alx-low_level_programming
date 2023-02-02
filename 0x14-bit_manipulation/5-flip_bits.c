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
	unsigned int j, i;

	j = 0;
	result = 1;
	differnce = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (result == (differnce & result))
			j++;
		result <<= 1;
	}

	return (j);
}
