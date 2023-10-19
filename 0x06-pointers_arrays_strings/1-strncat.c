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
