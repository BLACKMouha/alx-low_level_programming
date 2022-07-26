#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given index
 * Prototype:
 * insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
 * @head: points to the first node
 * @idx: index of the list where the new node should be added. Index
 * starts to 0
 * @n: data to be inserted into the new node
 * Return: the address of the new node, or NULL on failure. If it's
 * not possible to add the new node at index @idx, it does not add
 * the new node and it returns NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node_at_index = get_nodeint_at_index(*head, (idx - 1));
	listint_t *new_node;
	size_t non = listint_len(*head);

	if (idx > non)
		return (NULL);

	new_node = malloc(sizeof(new_node));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
		add_nodeint(head, n);
	else if (idx == (non - 1))
		add_nodeint_end(head, n);
	else
	{
		new_node->next = node_at_index->next;
		node_at_index->next = new_node;
	}
	return (new_node);
}
















































































