#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of a dlistint_t lsit
 * Protottype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
 * @head: points to the first node
 * @n: integer to insert into the data field of the new node
 * Return: the address of the new node or NULL in failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	last = *head;
	while (last->next)
		last = last->next;
	last->next = new;
	new->prev = last;

	return (new);
}












