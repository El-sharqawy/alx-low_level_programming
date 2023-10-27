#include "main.h"

/**
 * digit_check - check if character is digit.
 * @key: an input character.
 * Return: True if digit, otherwise False.
 */
bool digit_check(char key[])
{
	int i;
	int len = strlen(key);

	for (i = 0; i < len; i++)
	{
		if (isdigit(key[i]) == 0)
		{
			return (false);
		}
	}
	return (true);
}

/**
 * main - Entry Point
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 * Return: 0 on Success, otherwise 1.
 */
int main(int argc, char *argv[])
{
	int i;
	int x = 0;

	for (i = 1; i < argc; i++)
	{
		if (!digit_check(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		x += atoi(argv[i]);
	}
	printf("%d\n", x);
	return (0);
}
