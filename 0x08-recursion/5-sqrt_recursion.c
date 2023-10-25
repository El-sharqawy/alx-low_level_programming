#include "main.h"

/**
 * sqrt_operation - returns the natural square root of a number.
 * @x: an input integer.
 * @y: an input integer.
 * Return: square root or -1.
 */
int sqrt_operation(int x, int y)
{
	if (y * y > n)
		return (-1);
	if (y * y == n)
		return (y);

	return (sqrt_operation(x, y + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: an input integer.
 * Return: natural square root of n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_operation(n, 0));
}
