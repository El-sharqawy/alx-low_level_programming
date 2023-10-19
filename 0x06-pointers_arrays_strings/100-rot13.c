#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: input string.
 * Return: the pointer to string.
 */
char *rot13(char *str)
{
	int count = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int len = strlen(alphabet);

	while (str[count] != '\0')
	{
		for (i = 0; i < len; i++)
		{
			if (str[count] == alphabet[i])
			{
				str[count] = rot13[i];
				break;
			}
		}
		count++;
	}

	return(str);
}
