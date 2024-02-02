#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table.
 *
 * @ht: hash table we want to add or update key/value to.
 * @key: the key of the element.
 * @value: the avlue associated with the key.
 *
 * Return: 1 if it succeeded, otherwise 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *item, *newItem;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] != NULL)
	{
		item = ht->array[index];
		while (item != NULL)
		{
			if (strcmp(item->key, key) ==0)
			{
				free(item->value);
				item->value = strdup(value);
				return (1);
			}
			item = item->next;
		}
		/* if key doesn't exit then create it ! */
		newItem = malloc(sizeof(hash_node_t));
		if (newItem == NULL)
		{
			return (0);
		}

		newItem->key = strdup(key);
		newItem->value = strdup(value);
		newItem->next = ht->array[index];
		ht->array[index] = newItem;
		return (1);
	}
	else
	{
		newItem = malloc(sizeof(hash_node_t));
		if (newItem == NULL)
		{
			return (0);
		}
		newItem->key = strdup(key);
		newItem->value = strdup(value);
		newItem->next = NULL;
		ht->array[index] = newItem;
		return (1);
	}
	return (0);
}
