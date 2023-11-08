#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: an input string
 * @f: an input function
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
