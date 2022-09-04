#include "lists.h"

/**
 * dlistint_len - computes the number of nodes of a dlistint_t list
 *
 * Prototype: size_t dlistint_t(dlistint_t *h);
 * @h: points to the first node
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	if (!h)
		return (0);

	i = 0;
	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}


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



















