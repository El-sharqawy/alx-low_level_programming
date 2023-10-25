#include "main.h"

/**
 * is_prime_helper - returns 1 if the input integer is a prime number.
 * @n: an input integer.
 * @div: an input integer.
 * Return: 1, otherwise return 0.
 */
int is_prime_helper(int n, int div)
{
	if (n <= 1)
		return (0);

	if (div * div > n)
		return (1);

	if (n % div == 0)
		return (0);

	return (is_prime_helper(n, div + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is
 * a prime number, otherwise return 0.
 * @n: an input integer.
 * Return: 1, otherwise return 0.
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
