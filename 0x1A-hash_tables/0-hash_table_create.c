#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 *
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table, otherwise NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (table != NULL)
	{
		table->size = size;
		table->array = (hash_node_t **)malloc(table->size * sizeof(hash_node_t *));
		/* memset(table->array, 0, table->size * (sizeof(hash_node_t *))); */
		for (i = 0; i < table->size; i++)
		{
			table->array[i] = NULL;
		}
		return (table);
	}
	return (NULL);
}
