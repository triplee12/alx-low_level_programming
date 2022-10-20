#include "lists.h"

/**
 * print_list - Print the elements of a list.
 * @h: head pointer
 *
 * Description: Prints all the elements of a list in order.
 * Return: The size of the list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
		count++;
	}

	return (count);
}
