#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * Prototype: void free_dlistint(dlistint_t *head);
 * @head: points to the first node
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *current;

	current = head;
	while (current)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	head = NULL;
}
