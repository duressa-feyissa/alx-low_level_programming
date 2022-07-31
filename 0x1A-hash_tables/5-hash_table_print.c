#include "hash_tables.h"

/**
 * hash_table_print - A function that prints a hash table.
 * @ht:  is the hash table
 * Return: Void.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int count = 0;
	hash_node_t *ptr;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (count != 0)
				printf(", ");

			ptr = ht->array[i];
			while (ptr)
			{
				printf("'%s': '%s'", ptr->key, ptr->value);
				ptr = ptr->next;
				if (ptr)
					printf(", ");
			}
			count = 1;
		}
	}
	printf("}\n");
}
