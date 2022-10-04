#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * Prototype: void hash_table_print(const hash_table_t *ht);
 * @ht: a hash table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned int idx, comma = 0;

	if (!ht)
		return;

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		tmp = ht->array[idx];
		while (tmp)
		{
			if (comma == 1)
				printf(", ");
			if (tmp)
				printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
			comma = 1;
		}
	}
	printf("}\n");
}






































