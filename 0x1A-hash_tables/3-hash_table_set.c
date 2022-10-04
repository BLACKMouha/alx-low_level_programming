#include "hash_tables.h"

/**
 * hash_table_set - adds a new to the hash table
 * Prototype: int hash_table_set(hash_table *ht, const char *key,
 * const char value);
 *
 * @ht: the hash table to use
 * @key: a not empty string used as a key
 * @value: a (empty) string as a data mapped to the @key
 *
 * Return: 1 on success, otherwise 0.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *nhn /** new_hash_node */, *tmp;
	unsigned long int idx_nhn;

	if (!ht || !key || !value)
		return (0);

	idx_nhn = key_index((unsigned char *) key, ht->size);
	tmp = ht->array[idx_nhn];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			tmp->value = strcpy(tmp->value, value);
			return (1);
		}
		tmp = tmp->next;
	}

	nhn = malloc(sizeof(hash_node_t *));
	if (!nhn)
	{
		free(nhn);
		return (0);
	}
	nhn->key = strdup(key);
	nhn->value = strdup(value);
	nhn->next = NULL;

	if (ht->array[idx_nhn] == NULL)
		ht->array[idx_nhn] = nhn;
	else
	{
		nhn->next = ht->array[idx_nhn];
		ht->array[idx_nhn] = nhn;
	}
	return (1);

}
