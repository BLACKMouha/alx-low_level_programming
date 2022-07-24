#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * Prototype: size_t print_list(const list_t *h)
 * @h: head of a list_t list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t non = 0;

	if (h)
	{
		while (h != NULL)
		{
			if (h->str != NULL)
				printf("[%d] %s\n", h->len, h->str);
			else
				printf("[%d] (nil)\n", h->len);
			h = h->next;
			non++;
		}
		printf("\n");
		return (non);
	}
	else
		return (0);
}
