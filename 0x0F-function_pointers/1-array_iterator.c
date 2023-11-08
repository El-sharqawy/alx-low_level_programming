#include "function_pointers.h"

/**
 * array_iterator - executes a function given,
 * as a parameter on each element of an array.
 * @array: an input array.
 * @size: array size
 * @action: input function.
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int len = size;
	int i;

	if (!array || action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
