#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *item, *next;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		item = ht->array[i];
		while (item)
		{
			next = item->next;
			if (item->key)
				free(item->key);
			if (item->value)
				free(item->value);
			free(item);
			item = next;
		}
	}
	free(ht->array);
	free(ht);
}
