#include "lists.h"

/**
 * get_dnodeint_at_index - finds the nth node of a dlistint_t list
 * Prototype:
 * dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
 *
 * @head: points to the first node
 * @index: position of the node to find
 *
 * Return: the address of the node or NULL in failure
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	size_t non; /** number of nodes */
	unsigned int i;

	if (!head)
		return (NULL);

	non = dlistint_len(head);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	if (index >= non)
		return (NULL);
	node = head;
	for (i = 0; i < index; i++)
		node = node->next;
	return (node);
}



















