#include "lists.h"

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


























