#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * meet - function that finds the start of the loop of the linked list
 *
 * @head: pointer to listint_t struct
 *
 * Return: node address where the loop starts
 */
listint_t *meet(const listint_t *head)
{
	listint_t *fast, *slow;

	fast = (void *)head;
	slow = (void *)head;

	while (fast->next && fast->next->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = (void *)head;
			while (fast != slow)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}
	return (NULL);
}

/**
 * print_listint_safe - function that prints a listint_t linked list
 *
 * @head: pointer to listint_t struct
 *
 * Return: nodes number
 */

size_t print_listint_safe(const listint_t *head)
{
	int i = 0, count = 0;
	listint_t *start;

	if (head == NULL)
		return (0);

	start = meet(head);
	while (head)
	{
		if (head == start)
			i++;
		if (i == 2)
			break;
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		head = head->next;
	}
	if (start)
		printf("-> [%p] %d\n", (void *)start, start->n);
	return (count);
}
