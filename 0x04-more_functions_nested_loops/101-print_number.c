#include "main.h"

/**
 * print_number - Check Main
 * @c: An input integer
 * Description: function that prints an integer.
 * Return: Nothing
 */
void print_number(int c)
{
	/* convert the int to string */
	char buf[20];
	int length = sprintf(buf, "%d", c);
	int i;

	for (i = 0; i < length; i++)
	{
		_putchar(buf[i]);
	}
}
