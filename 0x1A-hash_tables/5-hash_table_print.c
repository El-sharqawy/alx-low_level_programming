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
	unsigned long int i, comma;
	hash_node_t *item;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	for (i = 0 ; i < ht->size; i++)
	{
		item = ht->array[i];
		while (item != NULL)
		{
			printf("'%s': '%s'%s", item->key, item->value, (comma ? ", " : ""));
			item = item->next;
			if (item == NULL)
				comma = 0;
			else
				comma = 1;
		}
	}
	printf("}\n");
}
