#include "main.h"

/*
 * _puts_recursion - prints a string,
 * followed by a new line.
 * @s: an input character.
 * Return: Nothing.
 */
void _puts_recursion(char *s)
{
	int i;
	int len = strlen(s);

	for (i = 0; i < len; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
