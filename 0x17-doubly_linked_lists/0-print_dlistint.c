#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 *
 * Prototype:
 * size_t print_dlistint(const dlistint_t *h);
 * @h: points to the first node
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	if (!h)
		return (0);

	i = 0;
	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}

































































































