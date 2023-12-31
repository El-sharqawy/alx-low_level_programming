#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: an input list
 * Return: number of elements.
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
