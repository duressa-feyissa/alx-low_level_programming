#include "lists.h"

/**
 * sum_dlistint- the sum of all the data (n) of a dlistint_t linked list.
 * @head: head
 * Return: sum, or 0 if it failed
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
