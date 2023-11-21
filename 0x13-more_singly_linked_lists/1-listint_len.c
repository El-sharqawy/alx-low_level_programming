#include "lists.h"

/**
 * listint_len - returns the number of elements
 * in a linked listint_t list.
 * @h: an input list
 * Return: number of elements.
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
