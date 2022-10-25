#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - clears a singly liked list.
 * @head: Singly linked list head pointer
 *
 * Description: deletes all the nodes of the singly linked list
 * Return: void (Nothing)
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

	temp = NULL;
}
