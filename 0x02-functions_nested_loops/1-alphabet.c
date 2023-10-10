#include "main.h"

/**
 * print_alpha - check the code
 *
 * Description: prints alphabet
 *
 * Return: Nothing
 */
void print_alpha()
{
	char c[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;

	for (i = 0; i < 27; i++)
	{
		_putchar(c[i]);
	}
}
