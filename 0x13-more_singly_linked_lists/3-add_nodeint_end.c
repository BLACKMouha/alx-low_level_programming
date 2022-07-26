#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * Prototype: listint_t *add_nodeint_end(listint_t **head, const int n)
 * @head: points to the first element
 * @n: integer to be hold by the n field of a listint_t node
 *
 * Return: the address of the new element or NULL on failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last_node;

	last_node = *head;

	new_node = malloc(sizeof(new_node));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (!(*head))
		*head = new_node;
	else
	{
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}

	return (new_node);
}










































