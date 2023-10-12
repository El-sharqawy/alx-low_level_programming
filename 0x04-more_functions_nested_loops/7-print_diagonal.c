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
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(92);
	}
	_putchar('\n');
}
