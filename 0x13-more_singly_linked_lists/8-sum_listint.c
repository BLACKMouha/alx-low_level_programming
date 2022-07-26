#include "lists.h"

/**
 * sum_listint - computes the sum of all the data (n) of a listint_t
 * linked list
 *
 * Prototype: int sum_listint(listint_t *head)
 * @head: points to the first block
 * Return: an integer representing the sum of all data of a listint_t
 * linked list. If the list is empty, it returns 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
