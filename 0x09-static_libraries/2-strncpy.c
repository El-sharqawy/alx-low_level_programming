#include "main.h"

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
