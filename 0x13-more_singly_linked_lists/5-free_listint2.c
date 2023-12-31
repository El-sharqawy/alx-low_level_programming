#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: an input list.
 * Return: Nothing.
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *current;

	if (!head)
		return;

	current = *head;

	while (current != NULL)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	*head = NULL;
}
