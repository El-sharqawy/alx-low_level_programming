#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: an input string.
 * @s2: an input string.
 * @n: number of bytes to be used.
 * Return: point to a newly allocated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = n, i;
	char *mystr;

	if (s1 == NULL && s2 == NULL)
	{
		mystr = (char *)malloc(1); /* Allocate memory for an empty string */
		if (mystr != NULL)
			mystr[0] = '\0'; /* Make it an empty string */
		return (mystr);
	}

	if (s1 == NULL)
		return (strdup(s2));

	if (s2 == NULL)
		return (strdup(s1));

	while (s1[len1] != '\0')
	{
		len1++;
	}
	mystr = (char *)malloc(len1 + n + 1);
	if (mystr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		mystr[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		mystr[len1 + i] = s2[i];
	}
	mystr[len1 + len2] = '\0';
	return (mystr);
}
