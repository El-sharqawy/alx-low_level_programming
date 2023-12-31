#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: An input character
 * Return: Nothing
 */
void print_rev(char *s)
{
	int num = 0;

	while (num >= 0)
	{
		if (s[num] == '\0')
			break;

		num++;
	}

	for (num--; num >= 0; num--)
		putchar(s[num]);

	putchar('\n');
}
