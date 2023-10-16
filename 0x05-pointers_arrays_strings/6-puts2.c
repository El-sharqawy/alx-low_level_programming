#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character.
 * @s: An input character
 * Return: Nothing
 */
void puts2(char *s)
{
	int i;

	if (s)
	{
		for (i = 0; s[i] != '\0'; i += 2)
			putchar(s[i]);

		putchar('\n');
	}
}
