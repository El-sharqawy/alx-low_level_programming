#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: an input list.
 * Return: the sum of all the data (n), otherwise 0.
*/
int sum_listint(listint_t *head)
{
	int count = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		count += (head)->n;
		(head) = (head)->next;
	}

	return (count);
}
