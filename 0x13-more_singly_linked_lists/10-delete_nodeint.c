#include "lists.h"

/**
 * listint_len - counts all the elements of a struct list type 
 * listint_t
 *
 * @h: pointer to the head/first member of a singly linked list of 
 * structs
 * of type listint_s
 *
 * Return: number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 1;

	if (h)
	{
		if (h->next)
			count += listint_len(h->next);

		return (count);
	}
	else
		return (0);
}

/**
 * get_nodeint_at_index - returns address of 'index'th member of
 * a struct list type listint_t
 *
 * @head: pointer to the first member of a singly linked list
 * of structs of type listint_s
 *
 * @index: index of node in list, starting at 0
 *
 * Return: address of 'index'th node of listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i;

	if (!head)
		return (NULL);

	for (i = 0; head->next; i++)
	{
		if (i == index)
			return (temp);

		temp = temp->next;
	}
	return (NULL);
}

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
	size_t non;
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
		node_at_index = get_nodeint_at_index(*head, (non - 1));
		previous_node = get_nodeint_at_index(*head, (non - 2));
		previous_node->next = NULL;
		free(node_at_index);
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
