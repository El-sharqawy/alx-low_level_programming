#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: an input unsigned integer to search in.
 * @index: an input unsigned integer index to search.
 * Return: value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (index >= sizeof(1UL) * 8)
		return (-1);

	bit = 1UL << index;
	return ((n & bit) != 0);
}
