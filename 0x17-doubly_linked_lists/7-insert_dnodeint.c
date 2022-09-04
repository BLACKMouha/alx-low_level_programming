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







































