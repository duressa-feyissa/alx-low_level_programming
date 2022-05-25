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
	listint_t *a, *b;

	if (*head == NULL)
	{
		return (NULL);
	}

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
	a = NULL;
	b = NULL;
	return (*head);
}
