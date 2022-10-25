#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - sums list elements
 * @head: Singly linked list head pointer
 *
 * Description: sums all the elements of a singly linked list.
 * Return: the number of nodes.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
