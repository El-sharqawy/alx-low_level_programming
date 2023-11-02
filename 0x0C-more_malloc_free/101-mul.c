#include "main.h"

/**
 * _is_digit - check if a string contains a non-digit character
 * @s: string to be evaluated
 * Return: 0 if a non-digit, 1 otherwise
 */
int _is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: input arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *str1, *str2;
	int len1, len2, total_len, i, digit1, digit2, carry, a = 0;
	int *results;

	str1 = argv[1];
	str2 = argv[2];
	if (argc != 3 || _is_digit(str1) == 0 || _is_digit(str2) == 0)
	{
		printf("Error\n");
		exit(98);
	}

	len1 = _strlen(str1);
	len2 = _strlen(str2);
	total_len = len1 + len2 + 1;
	results = malloc(sizeof(int) * total_len);
	if (results == NULL)
		return (1);

	for (i = 0; i <= len1 + len2; i++)
		results[i] = 0;

	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = str1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(str2) - 1; len2 >= 0; len2--)
		{
			digit2 = str2[len2] - '0';
			carry += results[len1 + len2 + 1] + (digit1 * digit2);
			results[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			results[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < total_len - 1; i++)
	{
		if (results[i])
			a = 1;

		if (a)
			_putchar(results[i] + '0');
	}

	if (a == 0)
		_putchar('0');

	_putchar('\n');
	free(results);
	return (0);
}
