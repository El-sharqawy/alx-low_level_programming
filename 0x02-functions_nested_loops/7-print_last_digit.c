#include "main.h"

/**
 * print_last_digit - Check Main
 * @n: An input integer
 * Description: function prints the last digit of a number.
 * Return: last digit of a number.
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		unsigned int positive_n = (unsigned int)(-n);

		_putchar('0' + (positive_n % 10));
		return (positive_n % 10);
	}
	else
	{
		_putchar('0' + (n % 10));
		return (n % 10);
	}
}
