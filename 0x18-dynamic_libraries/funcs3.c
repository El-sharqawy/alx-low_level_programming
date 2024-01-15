#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the original text
 * @src: the text to be added to dest
 * @n: number of characters to be added
 * Return: dest after concatenating
 */
char *_strncat(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (original_dest);
}

/**
 * _strncpy - copies a string.
 * @dest: the original text
 * @src: the text to be replaced
 * @n: number of characters to be replaced
 * Return: dest after replacing
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *original_dest = dest;
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i++] = '\0';
	}

	return (original_dest);
}

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

/**
 * _memset - fills memory with a constant byte.
 * @s: memory area pointed to.
 * @b: replaced character
 * @n: number of bytes to be filled.
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

/**
 * _memcpy - copies memory area.
 * @dest: memory area pointed to.
 * @src: the source of copied string
 * @n: number of bytes to be filled.
 * Return: a pointer to the memory area dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
