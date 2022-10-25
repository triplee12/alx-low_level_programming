#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - gets list elements
 * @head: Singly linked list head pointer
 * @index: Integer index of node to return
 *
 * Description: Finds and returns the element at index
 * Return: listint_t pointer to element.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (head != NULL && index != 0)
	{
		index--;
		head = head->next;
	}

	return (head);
}
