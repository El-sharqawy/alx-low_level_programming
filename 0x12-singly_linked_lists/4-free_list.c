#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: an input list.
 * Return: Nothing.
*/
void free_list(list_t *head)
{
	list_t *current;
	list_t *tmp;

	current = head;

	while (current != NULL)
	{
		tmp = current;
		free(tmp->str);
		free(tmp);
		current = current->next;
	}
}
