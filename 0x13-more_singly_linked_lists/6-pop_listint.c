#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of a listint_t
 * @head: Pointer
 * Return: the head node’s data (n).
 * Otherwise: 0
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return (0);

	}

	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);
	temp = NULL;

	return (n);
}
