#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: given hash table pointer
 * @key: the given key
 * @value: the given key
 *
 * Return: (1) if succeed
 * ------- (0) otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *tmp;

	if (!ht || !key || !*key || !value)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (!strcmp(key, tmp->key))
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (!tmp->value)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node);
		free(new_node->key);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
