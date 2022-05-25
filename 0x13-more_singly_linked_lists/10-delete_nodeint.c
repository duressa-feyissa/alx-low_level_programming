#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes the node at index.
 * @head: Pointer
 * @index: Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *p, *temp;

	if (*head == NULL || head == NULL)
		return (-1);

	p = *head;
	i = 0;

	if (index == 0)
	{
		*head = p->next;
		free(p);
		p = NULL;
		return (1);
	}

	while ((i < index - 1) && p)
	{
		p = p->next;
		if (p == NULL)
			return (-1);
		i++;
	}
	temp = p->next;
	p->next = temp->next;
	free(temp);
	return (1);
}
