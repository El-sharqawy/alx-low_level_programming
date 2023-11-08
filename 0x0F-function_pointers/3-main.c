#include "3-calc.h"

/**
 * HandleError - Handle Errors
 * @err: number of error to exit.
 * Return: Nothing.
 */
void HandleError(int err)
{
	printf("Error\n");
	exit(err);
}

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
		HandleError(98);
	}

	argument1 = atoi(argv[1]);
	argument2 = atoi(argv[3]);

	fn = get_op_func(argv[2]);

	if (!fn)
	{
		HandleError(99);
	}

	op = *argv[2];

	if ((op == '/' || op == '%') && argument2 == 0)
	{
		HandleError(100);
	}

	result = fn(argument1, argument2);
	printf("%d\n", result);
	return (0);
}
