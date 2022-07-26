#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * Prototype: void free_listint(listint_t *head);
 * @head: points to the first node
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
