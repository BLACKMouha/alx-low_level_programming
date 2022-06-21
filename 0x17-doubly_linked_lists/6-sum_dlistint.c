#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - computes the sum of all the data (n) of a dlistint_t linked
 * list
 * Prototype: int sum_dlistint(dlistint_t *head)
 * @head: the pointer pointing the first block of a dlistint_t list
 * Return: an integer, the sum of all data of a dlistint_t linked list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum_of_datas = 0;

	while (head)
	{
		sum_of_datas += head->n;
		head = head->next;
	}
	return (sum_of_datas);
}

