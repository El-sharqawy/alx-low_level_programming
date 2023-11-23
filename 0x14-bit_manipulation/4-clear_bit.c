#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: an input unsigned integer to use.
 * @index: an input unsigned integer index to edit.
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index >= sizeof(1UL) * 8 || n == NULL)
		return (-1);

	bit = ~(1UL << index);

	*n = *n & bit;
	return (1);
}
