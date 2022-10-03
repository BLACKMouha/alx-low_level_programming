#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * Prototype: hash_table_t *hash_table_create(unsigned int size)
 * @size: the size of the array
 * Return:
 *        - a pointer to the newly created hash table on success
 *        - NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(hash_table_t));
	unsigned int i;

	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = calloc(size, sizeof(hash_node_t *));

	for (i = 0; i < ht->size; i++)
		ht->array[i] = NULL;

	return (ht);
}
