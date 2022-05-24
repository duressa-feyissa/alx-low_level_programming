#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - A function that adds a new node at the end of a list_t list
 * @str: Pointer to  string  parameter.
 * @head: Pointer to struct node.
 *
 * Return: The address of the end node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);

	i = 0;
	while (*(str + i))
	{
		i++;
	}
	newNode->len = i;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}

	else
	{
		list_t *lastNode = *head;

		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newNode;
		return (lastNode);
	}
}
