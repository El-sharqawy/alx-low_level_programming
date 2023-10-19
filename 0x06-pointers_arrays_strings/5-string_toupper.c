#include "main.h"

/**
 * string_toupper - change string to upper case
 * @lower: an input character
 * Return: uppercase string
 */
char *string_toupper(char *lower)
{
	int len = strlen(lower);
	int i;

	lower[len] = '\0';

	for (i = 0; i < len; i++)
	{
		lower[i] = toupper(lower[i]);
	}

	return (lower);
}
