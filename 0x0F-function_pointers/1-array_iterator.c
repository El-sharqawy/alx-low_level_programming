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
	size_t i;

	if (!array || !action)
		return;

	if (size == 0)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
