#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list.
 *
 * @head: pointer to listint_t struct
 *
 * Return: nodes number
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast, *slow;

	fast = (void *)head;
	slow = (void *)head;

	while (fast->next && fast->next->next && slow)
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
