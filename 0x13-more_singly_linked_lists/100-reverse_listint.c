#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_t *reverse_listint - A function that reverses a linked list.
 * @head: Pointer
 *
 * Return: A pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *a = NULL;
	listint_t *b = NULL;

	if (*head == NULL || head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (NULL);
	a = *head;
	b = a->next;
	a->next = NULL;

	while (a)
	{
		a = b->next;
		b->next = *head;
		*head = b;
		b = a;
	}
	return (*head);
}
