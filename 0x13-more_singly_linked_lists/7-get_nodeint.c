#include "lists.h"

/**
 * listint_len - computes the number of node of a listint_t list
 * Prototype: size_t listint_len(const listint_t *h);
 * @h: points to the first node
 * Return: the number of nodes of a listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t non;

	non = 0;
	if (h)
	{
		while (h != NULL)
		{
			h = h->next;
			non++;
		}
		return (non);
	}
	else
		return (0);
}

/**
 * get_nodeint_at_index - finds the nth node of a listint_t list
 * Prototype:
 * listint_t *get_nodeint_at_index(listint_t *head; unsigned int
 * index)
 * @head: points to the first node
 * @index: the index of the node to be found, starting to 0
 * Return: the address of the node to be found. If the node does not
 * extst, NULL is returned
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node_at_index;
	unsigned int runner;
	size_t non = listint_len(head);

	if (index > non)
		return (NULL);

	runner = 0;
	while (head && runner < index)
	{
		head = head->next;
		runner++;
	}
	node_at_index = head;

	return (node_at_index);
}


























