#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Description: prints alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alpha(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;

	for (i = 0; i < 27; i++)
	{
		_putchar(c[i]);
	}
}
int main(void)
{
	print_alpha();
	return (0);
}
