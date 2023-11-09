#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: String to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: Variable number of paramters to be summed.
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	int value = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return;

	for (; i < n; i++)
	{
		value = va_arg(args, int);
		printf("%d", value);
		if (i != n - 1)
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(args);
}
