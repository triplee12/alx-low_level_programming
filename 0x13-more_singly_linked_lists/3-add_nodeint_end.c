#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node
 * @head: Pointer to head pointer
 * @n: data integer
 *
 * Description:  adds a new node at the end of a listint_t list.
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *ptr = (*head);

	if (new == NULL)
		return (NULL);
	else if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		*head = new;
	}
	else
	{
		new->n = n;
		new->next = NULL;

		while (ptr->next != NULL)
			ptr = ptr->next;

		ptr->next = new;
	}

	return (new);
}
