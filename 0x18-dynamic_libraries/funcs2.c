#include "main.h"

/**
 * _isupper - Check Main
 * @a: An input character
 * Description: function returns 1 if the character is uppercase
 * Return: 1 or 0 in otherwise.
 */
int _isupper(int a)
{
	if (a >= 'A' && a <= 'Z')
		return (1);

	else
		return (0);
}

/**
 * _strlen - returns the length of a string.
 * @s: An input character
 * Return: Nothing
 */
int _strlen(char *s)
{
	unsigned int len = 0;

	while (*s++ != '\0')
		len++;

	return (len);
}

/**
 * _strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest.
 * @dest: An input buffer
 * @src: An input string
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int n = _strlen(dest), i = 0;

	for (; i <= n; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}

/**
 * _atoi - convert a string to an integer.
 * @s: An input string
 * Return: integer value.
 */
int _atoi(char *s)
{
	unsigned int i, count = 0, size = 0, oi = 0, dd = 1, k = 1;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;

		if (*(s + count) == '-')
			dd *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				k *= 10;
			size++;
		}

		count++;
	}

	for (i = count - size; i < count; i++)
	{
		oi = oi + ((*(s + i) - 48) * k);
		k /= 10;
	}
	return (oi * dd);
}

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
