#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: memory area pointed to search.
 * @accept: characters to search
 * Return: a pointer to the memory area s.
 */
char *_strpbrk(char *s, char *accept)
{
	char *str = s;
	for (; *str != '\0'; str++)
	{
		char *a = accept;
		for (; *a != '\0'; a++)
		{
			if (*(str) == *a)
				return (str);
		}
	}

	return ('\0');
}
