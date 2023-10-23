#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	char *str_start = str;
	unsigned int count = 0;

	while (*str != '\0')
	{
		char *a = accept;
		int found = 0;

		for (; *a != '\0'; a++)
		{
			if (*str == *a)
			{
				found = 1;
				break;
			}
		}

		if (found)
		{
			count++;
			str++;
		}
		else
		{
			break;
		}
	}

	return count;
}
