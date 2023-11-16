#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: an input list.
 * Return: the number of nodes.
*/
size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str != NULL)
		{
			count++;
			printf("[%d] %s\n", current->len, current->str);
			current = current->next;
		}
		else
		{
			count++;
			current = current->next;
			printf("[0] (nil)\n");
		}
	}
	return (count);
}
