#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: The number of parameters
 * @...: Variable number of paramters to be summed
 * Description: Calculates sum of all integers, If n not 0
 * If n is 0, return 0.
 *
 * Return: The sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int value = 0;
	va_list args;

	va_start(args, n);
	if (n == 0)
		return (0);

	for (; i < n; i++)
		value += va_arg(args, int);

	va_end(args);
	return (value);
}

