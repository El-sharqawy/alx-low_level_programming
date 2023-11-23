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
	unsigned int result;
	int num = 0;

	result = n ^ m;

	while (result > 0)
	{
		num++;
		result &= (result - 1);
	}

	return (num);
}
