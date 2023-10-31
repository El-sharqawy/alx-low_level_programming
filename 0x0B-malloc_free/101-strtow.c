#include "main.h"

/**
 * strtow - splits a string into words.
 * @str: an input string
 * Return: a pointer to an array of strings, or NULL.
 */

char **strtow(char *str)
{
	int size, i, m, j = 0, k = 0;
	char **my_words;

	if (str == NULL)
		return (NULL);
	size = strlen(str);
	if (size == 0)
		return (NULL)

	my_words = (char **)malloc((size + 1) * sizeof(char *));
	if (my_words == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (j > 0)
			{
				my_words[k] = (char *)malloc((j + 1) * sizeof(char));
				if (my_words[k] == NULL)
					return (NULL);
				for (m = 0; m < j; m++)
				{
					my_words[k][m] = str [i - j + m];
				}
				my_words[k][j] = '\0';
				k++;
				j = 0;
			}
		}
		else
			j++;
	}
	my_words[k] = NULL;
	if (k == 0)
	{
		free(my_words);
		return (NULL);
	}
	return (my_words);
}
