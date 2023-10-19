#include <stdbool.h>
#include "main.h"

/**
 * isSeparator - check if character is seperator
 * @c: an input character
 * Return: true otherwise false
 */
bool isSeparator(char c)
{
	int i;
	char separators[] = " \t\n,;.!\"(){}";

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
		{
			return true;
		}
	}

	return false;
}

/**
 * cap_string - capitalizes all words of a string.
 * @str: an input string
 * Return: Edited string
 */
char *cap_string(char *str)
{
	int capitalizeNext = 1;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (isSeparator(str[i]))
		{
			capitalizeNext = 1;
		}
		else if (isalpha(str[i]))
		{
			if (capitalizeNext)
			{
				str[i] = toupper(str[i]);
				capitalizeNext = 0; 
			}
			else
			{
				str[i] = tolower(str[i]);
			}
		}
	}
	return (str);
}
