#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the original text
 * @src: the text to be added to dest
 * Return: dest after concatenating
 */
char *_strcat(char *dest, char *src)
{
	char *original_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (original_dest);
}
