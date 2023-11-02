#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements.
 * @size: size of array.
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int total_size, i;
	void *ptr;
	unsigned char *ptr_byte;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}

	total_size = nmemb * size;

	if (total_size / nmemb != size)
	{
		return (NULL); /* Overflow occurred */
	}

	ptr = malloc(total_size);

	if (ptr != NULL)
	{
		ptr_byte = (unsigned char *)ptr;
		for (i = 0; i < total_size; i++)
		{
			ptr_byte[i] = 0;
		}
	}

	return (ptr);
}
