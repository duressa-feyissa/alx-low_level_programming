#include "hash_tables.h"

/**
 * hash_table_get - A function that prints a hash table.
 * @ht: is the hash table
 * @key: is a key
 * Return: On succes value of the key otherwise NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int num;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);

	num = key_index((unsigned char *)key, ht->size);
	node = ht->array[num];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
