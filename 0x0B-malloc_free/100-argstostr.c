#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: input argument
 * Return: a pointer to a new string, or NULL.
 */
char *argstostr(int ac, char **av)
{
	char *my_str;
	int len, i, j, length = 0, index = 0, arg_length = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (len = 0; len < ac; len++)
	{
		length += strlen(av[len]) + 1;
	}
	length += 1;
	my_str = (char *)malloc(length);

	if (my_str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		arg_length = strlen(av[i]);
		for (j = 0; j < arg_length; j++)
		{
			my_str[index] = av[i][j];
			index++;
		}

		if (i < ac - 1)
		{
			my_str[index] = '\n';
			index++;
		}
	}

	my_str[index] = '\n';
	return (my_str);
}
