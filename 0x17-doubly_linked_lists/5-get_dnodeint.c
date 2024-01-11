#include "lists.h"

/**
* get_dnodeint_at_index - find list at specific index and return it
*
* @head: points to a dlistint_t list
* @index: specific index to search at.
*
* Description: a function that finds list at specific index and return it.
*
* Return: the node, otherwise NULL.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *myList = head;
	unsigned int count = 0;

	while (myList != NULL)
	{
		if (count == index)
			return (myList);
		count++;
		myList = myList->next;
	}
	return (NULL);
}
