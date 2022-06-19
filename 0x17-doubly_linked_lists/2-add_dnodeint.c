#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/**
 * add_dnodeint - add a new node at the beginning of a dlistint_t list
 * Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n);
 * @head: head  of the dlistint_t list
 * @n: data to be added
 *Return: address of the new elemen, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t** head, const int n)
{
	dlistint_t* new_node = (dlistint_t*)malloc(sizeof(dlistint_t));

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
