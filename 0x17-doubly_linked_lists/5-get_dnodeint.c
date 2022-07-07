#include "lists.h"

/**
 * get_dnodeint_at_index - the nth node of a dlistint_t linked list.
 * @head: head
 * @index: is the index of the node, starting from 0
 * Return: the node, or NULL if it failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *ptr;

	if (head == NULL)
		return (NULL);

	ptr = head;
	i = 0;
	while (ptr)
	{
		if (i == index)
			return (ptr);
		ptr = ptr->next;
		i++;
	}
	return (NULL);
}
