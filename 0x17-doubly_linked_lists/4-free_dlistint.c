#include "lists.h"

/**
* free_dlistint - frees a dlistint_t list.
*
* Description: a function that frees double linked list.
*
* Return: void.
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cur;
	dlistint_t *tmp;

	cur = head;
	while (cur != NULL)
	{
		tmp = cur->next;
		free(cur);
		cur = tmp;
	}
}
