#include "hash_tables.h"

/**
 * hash_table_get - retrieves the values associated with a key.
 * Prototype: char *hash_table_get(const hash_table_t *ht, const char *key);
 * @ht: a hash_table we want to look into.
 * @key: the key we are looking for.
 * Return:
 *         - a string, the value associated with @key,
 *         - or NULL if @key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *tmp;

	if (!ht || !key)
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);
	if (!ht->array[idx])
		return (NULL);

	tmp = ht->array[idx];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (ht->array[idx]->value);
}
