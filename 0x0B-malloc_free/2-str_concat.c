#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: and input string.
 * @s2: and input string.
 * Return: newly allocated space in memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated.
 */
char *str_concat(char *s1, char *s2)
{
	char *my_str;
	unsigned int i;
	unsigned int len1;
	unsigned int len2;

	if (s1 == NULL && s2 == NULL)
	{
		my_str = (char *)malloc(1); /* Allocate memory for an empty string */
		if (my_str != NULL)
			my_str[0] = '\0'; /* Make it an empty string */
		return (my_str);
	}

	if (s1 == NULL)
		return (strdup(s2));

	if (s2 == NULL)
		return (strdup(s1));

	len1 = strlen(s1);
	len2 = strlen(s2);

	my_str = (char *)malloc(len1 + len2 + 1);

	if (my_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		my_str[i] = s1[i];

	for (i = 0; i < len2; i++)
		my_str[len1 + i] = s2[i];

	my_str[len1 + len2] = '\0';
	return (my_str);
}
