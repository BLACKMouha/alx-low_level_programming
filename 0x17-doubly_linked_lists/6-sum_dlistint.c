#include "lists.h"

/**
 * sum_dlistint - computes the sum of all data of a dlistint_t list
 * Prototype: int sum_dlistint(dlistint_t *head);
 * @head: points to the first node
 *
 * Return: the sum of all n fields of a dlistint_t list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	if (!head)
		return (0);

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
