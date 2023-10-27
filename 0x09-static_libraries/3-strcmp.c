#include "main.h"

/**
 * _strcmp - compares a string.
 * @s1: an input character
 * @s2: an input character
 * Return: the difference in strings
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		++s1;
		++s2;
	}
	return ((int)(*s1) - (int)(*s2));
}
