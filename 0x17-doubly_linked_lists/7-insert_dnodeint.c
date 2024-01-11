#include "lists.h"

/**
* insert_dnodeint_at_index - inserts a new node at the given position.
*
* @h: pointer points to dlistint_t list pointer.
* @idx: the index of the list where the new node should be added.
* @n: given number to be added.
*
* Return: the address of the new node, or NULL if it failed.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int curPos = 0;
	dlistint_t *newList;
	dlistint_t *current = *h;

	newList = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!newList || !h)
		return (NULL);

	newList->n = n;

	if (idx == 0)
	{
		newList->next = *h;
		newList->prev = NULL;
		if (h)
			(*h)->prev = newList;
		return (newList);
	}
	while (current && curPos < idx - 1)
		current = current->next;

	if (!current)
	{
		free(newList);
		return (*h);
	}
	newList->next = current->next;
	newList->prev = current;
	if (current->next)
		current->next->prev = newList;
	current->next = newList;
	return (*h);

}
