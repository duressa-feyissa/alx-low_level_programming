#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	if (head)
	{
		if (head->next)
		{
			free_list(head->next);
		}
		free(head->str);
		free(head);
	}
}
