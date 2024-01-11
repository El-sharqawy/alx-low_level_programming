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
	unsigned int curPos = 1;
	dlistint_t *newList = NULL;
	dlistint_t *current;

	if (idx != 0)
	{
		current = *h;
		if (current != NULL)
		{
			while (current->prev != NULL)
				current = current->prev;
		}
		while (current != NULL)
		{
			if (curPos == idx)
			{
				if (!current->next)
					newList == add_dnodeint_end(h, n);
				else
				{
					newList = malloc(sizeof(dlistint_t));
					if (newList != NULL)
					{
						newList->n = n;
						newList->next = current->next;
						newList->prev = current;
						current->next->prev = newList;
						current->next = newList;
					}
				}
				break;
			}
			current = current->next;
			curPos++;
		}
	}
	else
		newList = add_dnodeint(h, n);
	return (newList);
}
