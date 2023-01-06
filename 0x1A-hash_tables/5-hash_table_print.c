#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the given hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	int flag = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			flag++;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
