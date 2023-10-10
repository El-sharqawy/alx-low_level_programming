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
		_putchar('0' + -n % 10);
		return (-n % 10);
	}
	else
	{
		_putchar('0' + n % 10);
		return (n % 10);
	}
}
