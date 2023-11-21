#include "lists.h"

/**
 * delete_nodeint_at_index - inserts a new node at a given position.
 * @head: an input list.
 * @index: an input index to be deleted.
 * Return: 1 on Success, otherwise -1.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current;
	unsigned int curPosition = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (curPosition < index - 1)
	{
		if (!temp || !temp->next)
			return (-1);

		temp = temp->next;
		curPosition++;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
