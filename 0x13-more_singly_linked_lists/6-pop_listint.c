#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - Removes from beginning
 * @head: Removes from the beginning of the list.
 *
 * Description: Pops from the head of a singly linked list and moves the head
 * pointer.
 * Return: The data in the removed node.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	data = temp->n;
	free(temp);

	return (data);
}
