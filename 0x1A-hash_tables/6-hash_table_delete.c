#include "hash_tables.h"

/**
 * hash_table_delete - delete an entire hash table
 * Prototype: void hash_table_delete(hash_table_t *ht);
 * @ht: a hash table
 * Return: Nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long i;
	hash_node_t *tmp_arr, *tmp_node;

	for (i = 0; i < ht->size; i++)
	{
		tmp_arr = ht->array[i];
		while (tmp_arr != NULL)
		{
			tmp_node = tmp_arr;
			tmp_arr = tmp_arr->next;
			free(tmp_node->key);
			free(tmp_node->value);
			free(tmp_node);
		}
	}
	free(ht->array);
	free(ht);
}








