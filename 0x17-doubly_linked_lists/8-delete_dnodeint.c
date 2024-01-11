#include "lists.h"

/**
* delete_dnodeint_at_index - Delete node at given specific index
*
* @head: a point to dlistint_t list pointer.
* @index: the index of the given node to be deleted.
*
* Return: 1 if it success, otherwise -1.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *newList;
	dlistint_t *tmp;
	unsigned int curPos = 0;

	if (!head)
		return (-1);

	newList = *head;
	if (index == 0)
	{
		(*head) = newList->next;
		if ((*head) != NULL)
			(*head)->prev = NULL;
		free(newList);
		return (1);
	}
	while (newList != NULL)
	{
		if (curPos == index - 1)
		{
			tmp = newList->next;
			if (!tmp)
				return (-1);
			newList->next = tmp->next;
			if (tmp->next != NULL)
				tmp->next->prev = newList;
			free(tmp);
			return (1);
		}
		newList = newList->next;
		curPos++;
	}
	return (-1);
}
