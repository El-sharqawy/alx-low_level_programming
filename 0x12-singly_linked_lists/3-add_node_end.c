#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: an input list.
 * @str: an input string.
 * Return: the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newList;
	list_t *current;

	if (str == NULL)
		return (NULL);

	newList = (list_t *)malloc(sizeof(list_t));

	if (newList == NULL)
		return (NULL);

	newList->str = strdup(str);

	if (newList->str == NULL)
	{
		free(newList);
		return (NULL);
	}

	newList->len = strlen(str);
	newList->next = NULL;

	if (*head == NULL)
	{
		*head = newList;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newList;
	}
	return (newList);
}
