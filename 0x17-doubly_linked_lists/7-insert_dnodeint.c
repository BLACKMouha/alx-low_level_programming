#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * Prototype:dlistint_t *isnert_dnode_at_index(dlistint_t **h,
 * unsigned int idx, int n);
 * @h: the pointer that points to the first block
 * @idx: the index where the new node will be inserted
 * @n: the data to be inserted within the new node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *nod_current_node;
	dlistint_t *node_at_idx;
	unsigned int nod = 0;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	nod_current_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	node_at_idx = (dlistint_t *)malloc(sizeof(dlistint_t));

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	for (nod_current_node = *h; nod_current_node;
	nod_current_node = nod_current_node->next)
		nod++;

	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}

	if (idx == (nod - 1))
	{
		new_node = add_dnodeint_end(h, n);
		return (new_node);
	}

	if (idx < (nod - 1))
	{
		node_at_idx = get_dnodeint_at_index(*h, idx);
		new_node->next = node_at_idx->next;
		new_node->prev = node_at_idx;
		node_at_idx->next->prev = new_node;
		node_at_idx->next = new_node;
		return (new_node);
	}

	return (NULL);
}

/**
 * get_dnodeint_at_index - returns the nth node of dlisint_t linked list;
 * @head: head of a dlistint_t list
 * @index: the index of the node to be found
 * Return: the nth node or NULL if it failed
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int non = 0; /* non means number of nodes */
	unsigned int  current_index = 0;
	dlistint_t *current_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (head)
	{
		current_node = head;
		while (current_node)
		{
			current_node = current_node->next;
			non++;
		}

		if (index > (non - 1))
			return (NULL);

		current_node = head;
		while (current_node && current_index < index)
		{
			current_node = current_node->next;
			current_index++;
		}
		return (current_node);
	}
	return (NULL);
}
