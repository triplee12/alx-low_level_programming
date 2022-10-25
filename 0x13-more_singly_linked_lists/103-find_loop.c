#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* find_listint_loop - finds a loop in a linked list
*
* @head: linked list to search
*
* Return: address of node where loop starts/returns, NULL if no loop
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr, *end;

	if (head == NULL)
		return (NULL);
	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (ptr = head; ptr != end; ptr = ptr->next)
			if (ptr == end->next)
				return (end->next);
	}

	return (NULL);
}
