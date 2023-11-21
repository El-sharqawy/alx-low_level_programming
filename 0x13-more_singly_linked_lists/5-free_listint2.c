#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: an input list.
 * Return: Nothing.
*/
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *tmp;

	current = *head;

	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
	*head = NULL;
}
