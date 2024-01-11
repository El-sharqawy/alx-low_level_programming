#include "lists.h"

/**
* sum_dlistint - returns the sum of dlistint_t data.
*
* @head: point to a dlistint_t list.
*
* Description: a function that returns the sum of all the data (n) of
* a dlistint_t linked list.
*
* Return: sum of all data, otherwise 0.
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (!current)
		return (sum);

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
