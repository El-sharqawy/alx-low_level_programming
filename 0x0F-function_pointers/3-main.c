#include "3-calc.h"

/**
 * main - program that performs simple operations.
 * @argc: number of arguments.
 * @argv: input arguments.
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int argument1, argument2, result;
	char op;
	int (*fn)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	argument1 = atoi(argv[1]);
	argument2 = atoi(argv[3]);

	fn = get_op_func(argv[2]);

	if (!fn)
	{
		printf("Error\n");
		exit(99);
	}

	op = *argv[2];

	if ((op == '/' || op == '%') && argument2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = fn(argument1, argument2);
	printf("%d\n", result);
	return (0);
}
