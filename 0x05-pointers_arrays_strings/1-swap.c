#include "main.h"

/**
 * swap_int - swap the value of two input pointers
 * @a: An input integer
 * @b: An input integer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
