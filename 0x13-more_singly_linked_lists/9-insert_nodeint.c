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
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * Prototype: listint_t *add_nodeint(listint_t **head, const int n);
 * @head: points to the first node
 * @n: integer to be inserted in the n field of a listint_t node
 * Return: the address of the newly node created or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (!n)
		return (NULL);

	new = malloc(sizeof(new));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
		new->next = NULL;
	else
		new->next = *head;

	*head = new;

	return (new);
}

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * Prototype: listint_t *add_nodeint_end(listint_t **head,
 * const int n)
 * @head: points to the first element
 * @n: integer to be hold by the n field of a listint_t node
 *
 * Return: the address of the new element or NULL on failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last_node;

	last_node = *head;

	new_node = malloc(sizeof(new_node));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (!(*head))
		*head = new_node;
	else
	{
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}

	return (new_node);
}

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
















































































