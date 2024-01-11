#include "lists.h"

/**
* add_dnodeint_end - adds a new node at the end of a dlistint_t list.
*
* @head: a pointer that points to dlistint_t pointer.
* @n: an input number to be added
*
* Return: the address of the new element, or NULL if it failed.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newList;
	dlistint_t *lastNode;

	newList = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!newList)
		return (NULL);

	newList->n = n;
	newList->next = NULL;

	if (*head == NULL)
	{
		newList->prev = NULL;
		*head = newList;
		return (newList);
	}
	else
	{
		lastNode = (*head);
		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newList;
		newList->prev = lastNode;
	}
	return (newList);
}
