#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: and input string.
 * Return: a pointer to the duplicated string, or NULL.
 */
char *_strdup(char *str)
{
	char *my_str;
	unsigned int i;
	unsigned int len1;
	unsigned int len2;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	my_str = (char *)malloc(len1 + len2 + 1);

	if (my_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		my_str[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
	{
		my_str[len1 + i] = s2[i];
	}

	my_str[len1 + len2] = '\0';
	return (my_str);
}
