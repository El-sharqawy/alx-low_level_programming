#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @str: input string.
 * Return: the pointer to string.
 */
char *leet(char *str)
{
	int i, j;
	int up[] = {65, 69, 79, 84, 76};
	int low[] = {97, 101, 111, 116, 108};
	int num[] = {52, 51, 48, 55, 49};
	int array_len = 5;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < array_len; j++)
		{
			if (str[i] == up[j] || str[i] == low[j])
			{
				str[i] = num[j];
				break;
			}
		}
	}
	return (str);
}
