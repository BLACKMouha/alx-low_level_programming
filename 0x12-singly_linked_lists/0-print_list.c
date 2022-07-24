#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * Prototype: size_t print_list(const list_t *h)
 * @h: head of a list_t list
 * Return: the number of nodes

 * If str == NULL, "[0] (nil)" is printed
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		node_count += 1;
	}

	printf("[%d] %s\n", h->len, h->str);

	return (node_count);
}
