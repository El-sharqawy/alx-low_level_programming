#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: a list of types of arguments passed to the function
 * @...: Variable number of paramters to be summed.
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *ptr = format;
	const char *str;

	va_start(args, format);
	while (ptr && *ptr)
	{
		switch (*ptr)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, const char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				break;
		}

		if (*(ptr + 1) && (*ptr == 'c' || *ptr == 'i' || *ptr == 'f' || *ptr == 's'))
			printf(", ");

		ptr++;
	}

	printf("\n");
	va_end(args);
}
