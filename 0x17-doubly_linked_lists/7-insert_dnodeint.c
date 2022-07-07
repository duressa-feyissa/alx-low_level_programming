#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: head
 * @idx: is the index of the list
 * @n: integer value
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *ptr, *temp;
	unsigned int i = 0;

	if (*h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	ptr = *h;
	if (idx == 0) /* To add at begin of list */
	{
		new->next = ptr;
		ptr->prev = new;
		*h = new;
		return (new);
	}
	while (ptr) /* To add at the middle*/
	{
		if (i == idx)
		{
			(ptr->prev)->next = new;
			new->prev = ptr->prev;
			new->next = ptr;
			ptr->prev = new;
			return (new);
		}
		i++, temp = ptr, ptr = ptr->next;
	}
	if (i == idx)
	{
		temp->next = new, new->prev = temp;
		return (new);
	}
	return (NULL);
}
