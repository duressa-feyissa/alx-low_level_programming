#include "hash_tables.h"

/**
 * shash_table_create - a function that creates a hash table.
 *
 * @size: Size of the hash table
 * Return: a pointer to the newly created hash table or NULL.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	shash_table_t *table = NULL;

	if (size == 0)
		return (NULL);
	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(shash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	table->shead = NULL;
	table->stail = NULL;
	return (table);
}

/**
 * checkArray - check if table is empty.
 * @ht: is hash table
 *
 * Return: if no array accolcated 0 otherwise 1.
 */
int checkArray(shash_table_t *ht)
{
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
			return (1);
	}
	return (0);
}

/**
 * sortArray - sort link list
 * @ht: is hash table
 * @new: new node
 * @idx: index of new node on hash table
 *
 * Return: void.
 */
void sortArray(shash_table_t *ht, shash_node_t *new, unsigned long int idx)
{
	shash_node_t *temp;

	if (checkArray(ht) == 0)
	{
		new->next = ht->array[idx];
		ht->array[idx] = new, ht->shead = new, ht->stail = new;
		return;
	}
	else
	{
		new->next = ht->array[idx];
		ht->array[idx] = new;
	}
	if ((int) ht->shead->key[0] > (int) new->key[0])
	{
		new->sprev = NULL;
		(ht->shead)->sprev = new;
		new->snext = ht->shead, ht->shead = new;
		return;
	}
	else
	{
		temp = ht->shead;
		while (temp)
		{
			if ((int) new->key[0] < (int) temp->key[0])
			{
				(temp->sprev)->snext = new;
				new->sprev = temp->sprev, temp->sprev = new;
				new->snext = temp;
				return;
			}
			if (temp->snext == NULL)
				break;
			temp = temp->snext;
		}
	}
	temp->snext = new;
	new->sprev = temp;
	ht->stail = new;
}

/**
 * shash_table_set - A function that adds an element to the hash table.
 * @ht: is the hash table
 * @key: is key
 * @value: is value
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	unsigned long int i;
	shash_node_t *new;
	char *v_copy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	v_copy = strdup(value);
	if (v_copy == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (i = idx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = v_copy;
			return (1);
		}
	}

	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
	{
		free(v_copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = v_copy;
	new->snext = NULL;
	new->sprev = NULL;
	sortArray(ht, new, idx);
	return (1);
}

/**
 * shash_table_get - A function that prints a hash table.
 * @ht: is the hash table
 * @key: is a key
 * Return: On succes value of the key otherwise NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int num;
	shash_node_t *node;

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

/**
 * shash_table_print -  print the hash tables key/value pairs
 *
 * @ht: hash table to print
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;
	int i = 0;

	temp = ht->shead;
	printf("{");
	while (temp)
	{
		if (i != 0)
		{
			printf(", ");
			i = 1;
		}
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev -  print the hash tables key/value pairs (rev)
 * @ht: hash table to print
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;
	int i = 0;

	temp = ht->stail;
	printf("{");
	while (temp)
	{
		if (i != 0)
		{
			printf(", ");
			i = 1;
		}
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - A function that frees a hash table.
 * @ht: The pointer to hash table to delete.
 * Return: Nothing.
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i = 0;
	shash_node_t *next_node = NULL, *node = NULL;

	if (!ht)
		return;

	if (ht->array)
	{
		for (; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				node = ht->array[i];
				while (node)
				{
					next_node = node->next;
					if (node->value)
						free(node->value);
					if (node->key)
						free(node->key);
					free(node);
					node = next_node;
				}
			}
		}
		free(ht->array);
	}
	free(ht);
}
