#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - prints list elements
 * @h: Singly linked list head pointer
 *
 * Description: prints all the elements of a listint_t list
 * Return: the number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t size = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
