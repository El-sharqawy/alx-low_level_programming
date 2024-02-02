#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 *
 * @ht: the hash table.
 *
 * Return: void.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *item;
	char *comma = "";

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}

	printf("{");
	for (i = 0 ; i < ht->size; i++)
	{
		item = ht->array[i];
		while (item != NULL)
		{
			printf("%s'%s': '%s'", comma, item->key, item->value);
			comma = ", ";
			item = item->next;
		}
	}
	printf("}\n");
}
