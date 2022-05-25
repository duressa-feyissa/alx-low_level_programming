#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *get_nodeint_at_index - return nth node of the list
 *@head: pointer to a head
 *@index: integer
 *
 *Return: pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *p;

	if (head == NULL)
		return (0);

	if (index == 0)
		return (head);
	p = head;
	while (p)
	{
		if (i == index)
			return (p);
		i++;
		p = p->next;
	}
	return (NULL);
}
