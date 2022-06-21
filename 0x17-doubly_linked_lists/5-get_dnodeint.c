#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

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

