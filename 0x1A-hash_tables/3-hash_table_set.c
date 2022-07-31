#include "hash_tables.h"

/**
 * hash_table_set - A function that adds an element to the hash table.
 * @ht: is the hash table
 * @key: is key
 * @value: is value
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	char *v_copy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	v_copy = strdup(value);
	if (v_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = v_copy;
			return (1);
		}
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(v_copy);
		return (0);
	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = v_copy;
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
