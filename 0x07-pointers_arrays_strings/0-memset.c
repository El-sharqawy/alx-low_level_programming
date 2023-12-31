#include "main.h"
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
