#include "main.h"

/*
 * Description: prints alphabet
 */
void print_alphabet(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;

	for (i = 0; i < 27; i++)
	{
		_putchar(c[i]);
	}
}
