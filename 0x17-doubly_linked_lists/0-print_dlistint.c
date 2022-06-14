#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint -  prints all the elements of a dlistint_t list
 * Prototype: size_t print_dlistint(const dlistint_t *h);
 * @h: list head
 * Return: element's number
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current_node; /* variable that traveses the list */
	unsigned int number_of_nodes = 0; /* number of nodes */

	if (h)
	{
		for (current_node = h; current_node; current_node = current_node->next)
		{
			printf("%d\n", current_node->n);
			number_of_nodes++;
		}
		return (number_of_nodes);
	}
	return (0);
}
