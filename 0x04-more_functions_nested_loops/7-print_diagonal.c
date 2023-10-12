/*
 * File: 7-print_diagonal.c
 * Auth: Osama Elsharqawy
 */

#include "main.h"

/**
 * print_diagonal - Check Main
 * @n: An input integer
 * Description: function that draws a diagonal line on the terminal.
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(32);
		}
		_putchar(92);
		if (i <(n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
