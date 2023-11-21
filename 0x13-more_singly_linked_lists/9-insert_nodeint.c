#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: an input list.
 * @idx: an input index to be added into.
 * @n: an input number to be added to index.
 * Return: he address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int curPosition = 0;
	listint_t *newList;
	listint_t *current;

	newList = (listint_t *)malloc(sizeof(listint_t));
	if (!newList || !head)
		return (NULL);

	newList->n = n;

	if (idx == 0)
	{
		newList->next = *head;
		*head = newList;
		return (newList);
	}

	current = *head;

	while (current && curPosition < idx - 1)
	{
		current = current->next;
		curPosition++;
	}

	if (!current)
	{
		current = *head;
		while (current->next)
		{
			current = current->next;
		}
	}

	newList->next = current->next;
	current->next = newList;
	return (newList);
}
