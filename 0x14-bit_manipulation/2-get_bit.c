#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index
 * @n: This is the number
 * @index: This is the index, starting from 0 of the bit you want to get
 * Return: The value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int max;

	max = (sizeof(unsigned long int) * 8);
	if (index > max)
		return (-1);

	bit = ((n >> index) & 1);
	return (bit);
}
