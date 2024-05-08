#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - a function that searches for a value,
 * in a sorted array of integers using the Binary search algorithm.
 *
 * @array: a given array to search in.
 * @size: the size of the array.
 * @value: the value to search in the array.
 *
 * Return: the index of the element, otherwise -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left = 0, right = size - 1;

	if (!array)
	{
		return (-1);
	}

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		i = left + (right - left) / 2;
		if (array[i] == value)
		{
			return (i);
		}
		if (array[i] > value)
		{
			right = i - 1;
		}
		else
		{
			left = i + 1;
		}
	}
	return (-1);
}
