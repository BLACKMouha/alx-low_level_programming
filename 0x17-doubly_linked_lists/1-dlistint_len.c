#include "lists.h"

/**
 * dlistint_len - function that returns the number of nodes of a dlistint_t list
 * Prototype: size_t dlistint_len(const dlistint_t *h);
 * @h: the head of the dlistint_t list
 * Return: the number of nodes in a linked dlistint_t list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current_node; /* list runner */
	int number_of_nodes = 0; /* lenght counter */

	for (current_node = h; current_node; current_node = current_node->next)
		number_of_nodes++;

	return (number_of_nodes);
}
