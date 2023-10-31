#include "main.h"

/**
 * count_words - count the number of words in a string
 * @str: string to check
 * Return: number of words
 */
int count_words(const char *str)
{
	int i, word_count = 0, in_word = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			if (in_word)
			{
				in_word = 0;
			}
		}
		else
		{
			if (!in_word)
			{
				word_count++;
				in_word = 1;
			}
		}
	}

	return (word_count);
}

/**
 * strtow - splits a string into words.
 * @str: an input string
 * Return: a pointer to an array of strings, or NULL.
 */
char **strtow(char *str)
{
	int i, size = 0, k = 0, words, j = 0, start, end;
	char **my_words, *temp;

	while (str[size])
		size++;

	words = count_words(str);
	if (words == 0)
		return (NULL);

	my_words = (char **)malloc((words + 1) * sizeof(char *));
	if (my_words == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
	{
		if (*(str + i) == ' ' || *(str + i) == '\0')
		{
			if (j > 0)
			{
				end = i;
				temp = (char *)malloc((j + 1) * (char));
				if (temp == NULL)
					return (NULL);
				while (start < end)
					*temp++ = str[start++];
				*temp = '\0';
				my_words[k] = temp - j;
				k++;
				j = 0;
			}
		}
		else if (j++ = 0)
			start = i;
	}
	
	my_words[k] = NULL;
	return (my_words);
}
