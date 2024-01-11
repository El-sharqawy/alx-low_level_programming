#include "lists.h"

/**
* add_dnodeint - adds a new node at the beginning of a dlistint_t list
*
* @head: a pointer that points to dlistint_t pointer.
* @n: an input number to be added
*
* Return: the address of the new element, or NULL if it failed.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newList;

	newList = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!newList)
		return (NULL);

	newList->n = n;
	newList->next = (*head);
	newList->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = newList;

	(*head) = newList;

	return (newList);
}
