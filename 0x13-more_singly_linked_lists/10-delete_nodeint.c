#include "lists.h"

int unshift_listint(listint_t **head);


/**
 * delete_nodeint_at_index - deletes the node at a given index
 * Prototype:
 * int delete_nodeint_at_index(listint_t **head unsigned int index);
 *
 * @head: points to the first node
 * @index: the index of the node that should be deleted. Index starts
 * at 0.
 * Return: 1 in Success, -1 on Failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t non = listint_len(*head);
	listint_t *node_at_index, *previous_node;

	if (!head)
		return (-1);

	non = listint_len(*head);

	if (index > non)
		return (-1);

	if (index == 0)
	{
		pop_listint(head);
		return (1);
	}

	if (index == (non - 1))
	{
		unshift_listint(head);
		return (1);
	}

	if (index != 0 || index != (non - 1) || index <= non - 1)
	{
		node_at_index = get_nodeint_at_index(*head, index);
		previous_node = get_nodeint_at_index(*head, (index - 1));
		previous_node->next = node_at_index->next;
		free(node_at_index);
		return (1);
	}
	return (-1);
}


/**
 * unshift_listint - deletes the last node of a listint_t list
 * Prototype: int unshift_listint(listint_t **head);
 * @head: points to the first node of a listint_t list
 * Return: the head node's data (n); if the linked list is empty it
 * returns 0
 */
int unshift_listint(listint_t **head)
{
	listint_t *last, *previous;
	int removed;
	size_t non = listint_len(*head);

	if (!head)
		return (0);

	non = listint_len(*head);
	last = get_nodeint_at_index(*head, (non - 1));

	if (*head)
	{
		previous = get_nodeint_at_index(*head, (non - 2));
		removed = last->n;
		last = NULL;
		free(last);
		previous->next = NULL;
		return (removed);
	}
	else
		return (0);
}
