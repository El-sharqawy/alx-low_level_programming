#include "main.h"

/**
 * sqrt_operation - returns the natural square root of a number.
 * @x: an input integer.
 * @y: an input integer.
 * Return: square root or -1.
 */
int sqrt_operation(int x, int y)
{
	if (y % (x / y) == 0)
	{
		if (y * (x / y) == 0)
			return (y);
		else
			return (-1);
	}
	return (0 + sqrt_operation(x, y +1));
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
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);

	return (sqrt_operation(n, 2));
}
