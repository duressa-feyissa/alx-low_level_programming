#include "hash_tables.h"

/**
 * hash_table_delete - A function that deletes a hash table.
 * @ht: is the hash table
 * Return: Void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *ptr;

	if (ht == NULL)
		return;

	if (ht->array == NULL)
	{
		free(ht);
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node != NULL)
		{
			while (node)
			{
				ptr = node;
				node = node->next;
				if (ptr->key)
					free(ptr->key);
				if (ptr->value)
					free(ptr->value);
				free(ptr);
			}
		}
	}
	free(ht->array);
	free(ht);
}
