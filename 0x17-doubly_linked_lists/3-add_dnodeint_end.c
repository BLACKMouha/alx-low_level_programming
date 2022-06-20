#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * Prototype: add_dnodeint_end(dlistint_t **head, const int n);
 * @head: head of a dlistint_t list
 * @n: integer to be added
 * Return: address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last_node;

	if (head)
	{
		new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
		if (new_node)
		{
			new_node->n = n;
			new_node->prev = NULL;
			new_node->next = NULL;
			if (*head == NULL)
			{
				*head = new_node;
				return (new_node);
			}
			last_node = *head;
			while (last_node->next)
			{
				last_node = last_node->next;
			}
			last_node->next = new_node;
			new_node->prev = last_node;
			return (new_node);
		}
		return (NULL);
	}
	return (NULL);
}
