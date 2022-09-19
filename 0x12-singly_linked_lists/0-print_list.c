#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * Prototype: size_t print_list(const list_t *h);
 * @h: head of a list_t list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes;
	list_t *tmp

	nodes = 0;
	if (!h)
		return (0)

	tmp = h
	while (tmp)
	{
		if (tmp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", tmp->len, tmp->str);
		nodes++;
		tmp = tmp->next;
	}
	return (nodes);
}
