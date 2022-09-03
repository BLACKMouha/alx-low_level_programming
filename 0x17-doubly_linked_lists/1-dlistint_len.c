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
