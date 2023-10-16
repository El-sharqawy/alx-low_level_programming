#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line.
 * @str: An input character
 * Return: Nothing
 */
void puts_half(char *str)
{
	int i, count, n;

	if (str)
	{
		count = strlen(str);

		if (count % 2 == 0)
		{
			n = count / 2;
		}
		else
		{
			n = (count - 1) / 2;
		}
		for (i = n; i < count; i++)
			putchar(str[i]);

		putchar('\n');
	}
}
