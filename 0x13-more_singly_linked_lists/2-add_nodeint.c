#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * of a listint_t list.
 * @head: an input list
 * @n: an input number
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newList;

	newList = (listint_t *)malloc(sizeof(listint_t));

	if (!newList)
	return (NULL);

	newList->n = n;
	newList->next = *head;
	*head = newList;

	return (newList);
}
