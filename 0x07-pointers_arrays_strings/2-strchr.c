#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: memory area pointed to search.
 * @c: character to search for
 * Return: a pointer to the memory area s.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*(s) == c)
			return (s);
		s++;
	}
	return (s);
}
