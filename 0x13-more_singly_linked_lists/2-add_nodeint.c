#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * Prototype: listint_t *add_nodeint(listint_t **head, const int n);
 * @head: points to the first node
 * @n: integer to be inserted in the n field of a listint_t node
 * Return: the address of the newly node created or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}









































