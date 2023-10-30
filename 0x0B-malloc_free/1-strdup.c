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
	unsigned int size = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}

	if (size == 0)
	{
		return ("");
	}

	my_str = (char *)malloc(size * sizeof(char));

	if (my_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		my_str[i] = *(str + i);
	}

	return (my_str);
}
