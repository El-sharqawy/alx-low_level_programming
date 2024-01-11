#include "lists.h"

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
