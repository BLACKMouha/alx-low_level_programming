#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at the index index of a
 * dlistint_t linked list.
 * Prototype: int delete_dnodeint_at_index(dlistint_t **head,
 * unsigned int index);
 * @head: head pointer of a dlistint_t linked list
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
#include "lists.h"

/**
 * dlistint_len - length of a doubly linked list
 * @h: list's head
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current_node; /* traverse all the list */
	int number_of_nodes = 0; /* number of nodes */

	for (current_node = h; current_node; current_node = current_node->next)
		number_of_nodes++;

	return (number_of_nodes);
}

/**
 * delete_dnodeint_at_index - deltes a node in a doubly linked list
 * at a given index
 * @head: double pointer to the list
 * @index: index of the node to delete
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	size_t non = dlistint_len(temp);
	unsigned int i = 0;

	if (*head == NULL ||  non < index + 1)
		return (-1);

	if (!index)
	{
		(*head) = temp->next;
		if (temp->next)
			temp->next->prev = NULL;
		temp->next = NULL;
		free(temp);
		return (1);
	}

	while (i < index)
	{
		temp = temp->next;
		i++;
	}

	temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;
	free(temp);

	return (1);
}
