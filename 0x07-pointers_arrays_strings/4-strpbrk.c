#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: memory area pointed to search.
 * @accept: characters to search
 * Return: a pointer to the memory area s.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;
		for (; *a != '\0'; a++)
		{
			if (*(s) == *a)
				return (s);
		}
		s++;
	}

	if (*(s) == c)
		return (s);

	return ('\0');
}
