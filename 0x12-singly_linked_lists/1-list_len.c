#include "lists.h"

/**
 * list_len - computes the number of elements of a list_t list
 * Prototype: size_t list_len(const list_t *h);
 * @h: head of a list_t list
 * Return: the number of nodes of a list_t list
 */
size_t list_len(const list_t *h)
{
	size_t non; /** number of nodes */

	non = 0;

	if (h)
	{
		while (h != NULL)
		{
			h = h->next;
			non++;
		}
		return (non);
	}
	else
		return (0);
}
