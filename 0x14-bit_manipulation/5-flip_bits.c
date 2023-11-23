#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: an input integer.
 * @m: an input integer.
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int result = 0;
	int num = 0;

	result = n ^ m;

	while (resut > 0)
	{
		num += result & 1;
		result >>= 1;
	}

	return (num);
}