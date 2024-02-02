#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with a key.
 *
 * @ht: the hash table we want to look into.
 * @key: the key we are looking for.
 *
 * Return: The value associated with the key, otherwise NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *element;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] != NULL)
	{
		element = ht->array[index];
		while (element != NULL)
		{
			if (strcmp(element->key, key) == 0)
			{
				return (element->value);
			}
			element = element->next;
		}
	}
	return (NULL);
}
