#include "lists.h"

/**
 * add_node_end - adds node at the end of linked list
 * @head: head of the node
 * @strn: string literal to add
 *
 * Return: the address of new node or null
 */

list_t *add_node_end(list_t **head, const char *strn)
{
	list_t *new = malloc(sizeof(list_t));
	new->str = strn;
	new->next = NULL;

	if(*head == NULL)
		*head = new;
	else
	{
		list_t last = *head;

		while(last->next != NULL)
			last = last->next;

		last->next = new;
	}

	return (*new);
}
