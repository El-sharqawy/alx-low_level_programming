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
	unsigned int len1, len2, lstr, i;
	char *mystr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (n > len2)
		n = len2;
	lstr = len1 + n;

	mystr = malloc(lstr + 1);
	
	if (mystr == NULL)
		return (NULL);

	for (i = 0; i < lstr; i++)
	{
		if (i < len1)
			mystr[i] = s1[i];
		else
			mystr[i] = s2[i - len1];
	}

	mystr[i] = '\0';
	return (mystr);
}
