/*
 * File: 3-print_numbers.c
 * Auth: Osama Elsharqawy
 */

#include "main.h"

/**
 * print_numbers - Check Main
 * Description: function that prints the numbers, from 0 to 9
 * Return: Nothing
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
