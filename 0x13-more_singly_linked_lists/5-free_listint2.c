#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and set the head to NULL
 * Prototype: void free_listint2(listint_t **head)
 * @head: points to the first element of a listint_t list
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		if ((*head)->next)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
		}
		else
		{
			free(*head);
			*head = NULL;
		}
	}
}
