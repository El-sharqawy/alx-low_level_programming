#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _islower - Check Main
 * @c: An input character
 * Description: function returns 1 if the character is lowercase
 * Return: 1 or 0 in otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * _isalpha - Check Main
 * @c: An input character
 * Description: function returns 1 if the character is alphabetic
 * Return: 1 or 0 in otherwise.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * _abs - Check Main
 * @n: An input integer
 * Description: function computes the absolute value of an integer.
 * Return: absolute value.
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

/**
 * _isdigit - Check Main
 * @c: An input character
 * Description: function returns 1 if the character is digit
 * Return: 1 or 0 in otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
