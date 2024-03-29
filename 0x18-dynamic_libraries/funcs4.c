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

	if (*(s) == c)
		return (s);

	return ('\0');
}

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		char *a = accept;
		int found = 0;

		for (; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
		}

		if (found)
		{
			count++;
			s++;
		}
		else
		{
			break;
		}
	}

	return (count);
}

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

/**
 * _strstr - locates a substring.
 * @haystack: main string to search ing.
 * @needle : string to be searched for
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}

/**
 * _puts - prints a string, followed by a new line.
 * @str: An input character
 * Return: Nothing
 */
void _puts(char *str)
{
	printf("%s\n", str);
}
