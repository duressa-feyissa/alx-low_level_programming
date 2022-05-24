#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * add_nodeint - A function that adds a new node at the beginning of a list.
 * @n: Pointer to  string  parameter.
 * @head: Pointer to struct node.
 *
 * Return: The address of the beginning node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (*head);
}
