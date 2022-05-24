#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node.
 * @head: Pointer to struct node.
 * @idx: is the index of the list
 * @n: Value insert
 * Return: The address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i, c;
	listint_t *ptr, *temp, *new, *count;

	if (head == NULL || *head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;
	temp = *head;
	count = *head;
	i = 0, c = 0;

	while (count->next)
	{
		count = count->next;
		c++;
	}
	if (c < idx)
		return (NULL);
	while (i < idx)
	{
		if (i == idx - 1)
			new = temp;
		temp = temp->next;
		i++;
	}
	ptr->next = temp;
	new->next = ptr;
	temp = NULL;
	new = NULL;
	return (ptr);
}
