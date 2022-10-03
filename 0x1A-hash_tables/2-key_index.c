#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * Prototype: unsigned long int key_index(const unsigned char *key,
 *                                        unsigned int long int size);
 * @key: string, the key
 * @size: the size of the array of the hash table
 *
 * Return: an integer, the index at which the key/value pair should be stored
 * in the array of a hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
