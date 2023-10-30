#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array.
 * @c: character to be initialized with.
 * Return: a pointer to the array, or NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *my_arr;
	unsigned int i;

	if (size <= 0)
	{
		return NULL;
	}

	my_arr = (char*)malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		my_arr[i] = c;
	}
	return my_arr;
	free(my_arr);
}
