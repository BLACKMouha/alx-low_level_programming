#include "search_algos.h"
#include <math.h>

/**
 * min - computes the minimum between two integers
 * Prototype: size_t min(size_t a, size_t b);
 * @a: integer
 * @b: integer
 * Return: the lowest integer between provided arguments
 */
size_t min(size_t a, size_t b) { return (a < b) ? a : b; }

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

/**
 * jump_list - searches for a value in a sorted list of integers using the
 * Jump Search Algorithm.
 *
 * Prototype: listint_t *jump_list(listint_t *list, size_t size, int value);
 * @list: head of the list
 * @size: number of elements in the list
 * @value: sought value
 * Return: the first node where value is located, or NULL on failure
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i, step, left, right;
	listint_t *tmp, *left_node;

	if (list == NULL || size == 0)
		return (NULL);
	step = (size_t)floor(sqrt(size));
	while (1)
	{
		i = 0;
		tmp = get_nodeint_at_index(list, i);
		for (; i < size && value > tmp->n; )
		{
			left = i;
			i += step;
			right = min(i, size - 1);
			tmp = get_nodeint_at_index(list, right);
			printf("Value checked at index [%ld] = [%d]\n", i, tmp->n);
		}
		printf("Value found between indexes [%ld] and [%ld]\n", left, right);
		if (left >= size)
			return (NULL);
		left_node = get_nodeint_at_index(list, left);
		for (tmp = left_node; tmp->index < right; tmp = tmp->next)
		{
			printf("Value checked at index [%ld] = [%d]\n", tmp->index, tmp->n);
			if (tmp->n == value)
				return (tmp);
		}
		return (NULL);
	}
	return (NULL);
}
