#include "hash_tables.h"

/**
 * hash_table_get - retrievees a value associated with a key
 * @ht: the hash table
 * @key: the given key
 *
 * Return: (Value) if there's a value associated with a key
 * ------- (NULL) if nothing found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (!ht || !key || !*key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(key, tmp->key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
