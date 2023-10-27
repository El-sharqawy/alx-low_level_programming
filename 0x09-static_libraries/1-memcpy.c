#include "main.h"
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
