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

	while (current->next != NULL)
	{
		tmp = current;
		current = current->next;
		if (tmp->str != NULL)
			free(tmp->str);
		free(tmp);
	}
}
