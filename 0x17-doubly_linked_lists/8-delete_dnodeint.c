#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index given.
 * @head: head
 * @index: is the index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *ptr;

	if (*head == NULL)
		return (-1);
	ptr = *head;
	if (index == 0)
	{
		if (ptr->next == NULL)
		{
			free(*head), *head = NULL;
			return (1);
		}
		(ptr->next)->prev = NULL;
		*head = ptr->next;
		free(ptr);
		return (1);
	}
	while (ptr && i <= index)
	{
		if (i == index)
		{
			if (ptr->next == NULL)
			{
				(ptr->prev)->next = NULL;
				free(ptr);
				return (1);
			}
			else
			{
				(ptr->prev)->next = ptr->next;
				(ptr->next)->prev = ptr->prev;
				free(ptr);
				return (1);
			}
		}
		i++, ptr = ptr->next;
	}
	return (-1);
}
