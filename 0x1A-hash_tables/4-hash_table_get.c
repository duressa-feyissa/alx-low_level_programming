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

	if (ht == NULL && key == NULL)
		return (NULL);

	num = key_index((unsigned char *)key, ht->size);

	if (ht->array[num] != NULL && strcmp(ht->array[num]->key, key) == 0)
		return (ht->array[num]->value);
	return (NULL);
}
