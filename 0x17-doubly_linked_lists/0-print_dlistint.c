#include "lists.h"

/**
* print_dlistint - prints all the elements of a dlistint_t list
*
* @h: a pointer points to dlistint_t.
*
* Return: number of elements.
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
