#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: minimum value to start with.
 * @max: minimum value in the array.
 * Return: The pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int arr_size = max - min + 1, i;
	int *result;

	if (min > max)
		return (NULL);

	result = (int *)malloc(arr_size * sizeof(int));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < arr_size; i++)
		result[i] = min + i;

	return (result);
}
