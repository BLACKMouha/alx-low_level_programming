#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a dlistint_t list
 * Prototype: void free_dlistint(dlistint_t *head);
 * @head: head of a dlistint_t list
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node, *temp;

	current_node = head;

	while (current_node)
	{
		temp = current_node;
		current_node = current_node->next;
		free(temp);
	}

	free(current_node);
}
