#include "main.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to previous memory block
 * @old_size: size in bytes of allocated space for ptr
 * @new_size: size in bytes for new allocated space
 * Return: a Pointer to new memory block, or NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_new, *ptr_copy;
	unsigned int i;

	if (old_size == new_size)
	{
		return (ptr);
	}

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		ptr_new = malloc(new_size);
		if (ptr_new == NULL)
			return (NULL);

		return (ptr_new);
	}

	ptr_new = malloc(new_size);
	if (ptr_new == NULL)
		return (NULL);

	ptr_copy = ptr;

	for (i = 0; i < old_size; i++)
		ptr_new[i] = ptr_copy[i];

	free(ptr);
	return (ptr_new);
}
