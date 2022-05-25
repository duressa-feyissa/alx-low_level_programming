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
	unsigned int i;
	listint_t *p, *newNode;

	if (*head == NULL || *head == NULL)
		return (0);

	p = *head;
	i = 0;
	while (p && i < idx - 1)
	{
		p = p->next;
		if (p == NULL)
			return (NULL);
		i++;
	}
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (*head);

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	newNode->next = p->next;
	p->next = newNode;

	return (newNode);
}
