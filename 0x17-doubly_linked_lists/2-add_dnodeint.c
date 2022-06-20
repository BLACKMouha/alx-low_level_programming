#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning of a dlistint_t list
 * Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n);
 * @head: head  of the dlistint_t list
 * @n: data to be added
 * Return: address of the new elemen, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head)
	{
		new_node  = (dlistint_t *)malloc(sizeof(dlistint_t));

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
			else
			{
				(*head)->prev = new_node;
				new_node->next = *head;
				*head = new_node;
				return (new_node);
			}
		}
		return (NULL);
	}
	return (NULL);
}