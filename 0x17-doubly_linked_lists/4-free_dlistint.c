#include "lists.h"

/**
 * free_dlistint- frees a dlistint_t list.
 * @head: head
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	current = head;
	while (current)
	{
		current = current->next;
		free(head);
		head = current;
	}
}
