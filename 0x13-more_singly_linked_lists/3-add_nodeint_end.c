#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * of a listint_t list.
 * @head: an input list.
 * @n: an input number to be added to the list.
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newList;
	listint_t *current;

	newList = (listint_t *)malloc(sizeof(listint_t));

	if (!newList)
		return (NULL);

	newList->n = n;
	newList->next = NULL;

	if (*head == NULL)
	{
		*head = newList;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newList;
	}

	return (newList);
}
