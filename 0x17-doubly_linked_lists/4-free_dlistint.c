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
	dlistint_t *temp;

	temp = head;
	while (temp)
	{
		free(temp);
		temp = temp->next;
	}
}
