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
	unsigned long int num;
	char *temp;
	hash_node_t *ptr = NULL;

	temp = (char *)key;
	if (strlen(temp) == 0 && ht == NULL && ht->array && key == NULL)
		return (0);

	num = key_index((unsigned char *)key, ht->size);
	ptr = ht->array[num];
	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			free(ptr->value);
			ptr->value = strdup(value);
			return (1);
		}
		ptr = ptr->next;
	}
	ht->array[num] = malloc(sizeof(hash_node_t));
	if (ht->array[num] == NULL)
		return (0);
	ht->array[num]->key = strdup(key);
	ht->array[num]->value = strdup(value);
	ht->array[num]->next = ht->array[num];
	return (1);
}
