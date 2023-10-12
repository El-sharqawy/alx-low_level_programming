/*
 * File: 6-print_line.c
 * Auth: Osama Elsharqawy
 */

#include "main.h"

/**
 * print_line - Check Main
 * @n: An input integer
 * Description: function that draws a straight line in the terminal
 * Return: Nothing
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
