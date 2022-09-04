#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning of a dlistint_t list
 * Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int);
 * @head: points to the first node
 * @n: data of the newly created and inserted node
 *
 * Return: the address of the new element, or NULL in
 * failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new;
	(*head) = new;
	return (new);

}





