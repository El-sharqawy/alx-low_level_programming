#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: an input array.
 * @size: size of array.
 * @cmp: input function ptr.
 * Return: the index of first element.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) > 0)
			return (i)
	}
	return (-1);
}
