/*
 * File: 8-print_square.c
 * Auth: Osama Elsharqawy
 */

#include "main.h"

/**
 * print_square - Check Main
 * @size: An input integer
 * Description: function that prints a square, followed by a new line.
 * Return: Nothing
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		if (i != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
