#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @str: input string.
 * Return: the pointer to string.
 */
char *leet(char *str)
{
	int i,j;
	char leetChars[] = "AaEeOoTtLl";
	char leetNums[] = "4433007711";
	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < strlen(leetChars); j++)
		{
			if (str[i] == leetChars[j])
			{
				str[i] = leetNums[j];
				break;
			}
		}
	}
	return (str);
}
