#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 -  a function that frees a listint_t list.
 * @head: Pointer to struct node.
 *
 * Return: Void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	ptr = *head;
	if (ptr)
	{
		if (ptr->next)
		{
			ptr = ptr->next;
			free_listint2(&ptr);
		}
		free(ptr);
	}
	*head = NULL;
}
