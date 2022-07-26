#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * Prototype: int pop_listint(listint_t **head);
 * @head: points to the first node of a listint_t list
 * Return: the head node's data (n); if the linked list is empty it
 * returns 0
 */
int pop_listint(listint_t **head)
{
	int removed;
	listint_t *old_head;

	if (!head)
		return (0);

	if (*head)
	{
		old_head = *head;
		removed = (*head)->n;
		*head = (*head)->next;
		free(old_head);

		return (removed);
	}
	else
		return (0);
}
