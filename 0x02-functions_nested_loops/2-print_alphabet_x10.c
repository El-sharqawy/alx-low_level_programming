#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase followed by a new line
 */
void print_alphabet_x10(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 27; i++)
		{
			_putchar(c[i]);
		}
	}
	_putchar('\n');
}
