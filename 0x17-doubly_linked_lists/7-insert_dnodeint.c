#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at a given index
 *
 * insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
 *
 * @h: points to the first node
 * @idx: position where the newly node will be inserted
 * @n: integer hold by the data field of the new node
 *
 * Return: the address of the new node or NULL in failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *curr_at_idx, *temp;
	size_t non;

	if (!h)
		return (NULL);

	non = dlistint_len(*h);
	if (idx >= non)
		return (NULL);

	temp = *h;
	if (idx == 0)
		return (add_dnodeint(&temp, n));
	if (idx == (non - 1))
		return (add_dnodeint_end(&temp, n));

	curr_at_idx = get_dnodeint_at_index(temp, idx);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = curr_at_idx;
	new->prev = curr_at_idx->prev;
	curr_at_idx->prev->next = new;
	curr_at_idx->prev = new;

	return (new);
}








































