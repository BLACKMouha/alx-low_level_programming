#include "lists.h"
/**
 * dlistint_len - length of a doubly linked list
 * @h: list's head
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current_node; /* traverse all the list */
	int number_of_nodes = 0; /* number of nodes */

	for (current_node = h; current_node; current_node = current_node->next)
		number_of_nodes++;

	return (number_of_nodes);
}
