#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints list elements
 * @h: Singly linked list head pointer
 *
 * Description: prints all the elements of a listint_t list
 * Return: the number of nodes.
 */
size_t print_listint(listint_t *h)
{
	size_t size = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		size++;
		printf("%d\n", h->n);
		h = h->next;
	}
	printf("%d\n", h->n);

	return (size);
}
