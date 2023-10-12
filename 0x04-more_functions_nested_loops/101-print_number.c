/*
 * File: 101-print_number.c
 * Auth: Osama Elsharqawy
 */

#include "main.h"

/**
 * print_number - Check Main
 * Description: function that prints an integer.
 * Return: Nothing
 */
void print_number(int c)
{
	/* convert the int to string */
	char buf[20];
	int length = sprintf(buf, "%d", c);

	for (int i = 0; i < length; i++)
	{
		_putchar(buf[i]);
	}
	_putchar('\n');
}
