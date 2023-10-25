#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: an input integer.
 * @y: an input integer.
 * Return: the value of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y % 2 == 0)
	{
		int _pow = _pow_recursion(x, y / 2);

		return (_pow * _pow);
	}
	else
	{
		int _pow = _pow_recursion(x, (y - 1) / 2);

		return (x * _pow * _pow);
	}
}
