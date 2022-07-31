#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table.
 *
 * @size: Size of the hash table
 * Return: a pointer to the newly created hash table or NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr = NULL;
	unsigned long int i = 0;

	ptr = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (ptr == NULL)
		return (NULL);

	ptr->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	if (ptr->array == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->size = size;
	for (i = 0; i < size; i++)
		(ptr->array)[i] = NULL;
	return (ptr);
}
