#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - A function that adds a new node at the beginning of a list.
 * @str: Pointer to  string  parameter.
 * @head: Pointer to struct node.
 *
 * Return: The address of the beginning node.
 */

list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *ptr;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);
	i = 0;
	while (*(str + i))
	{
		i++;
	}

	ptr->len = i;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;
	return (*head);
}
