#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * Prototype: size_t print_listint(const listint_t *h);
 * @h: points to the first node
 * Return: the number of nodes of a listint_t list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 1;

	if (h)
	{
		printf("%i\n", h->n);

		if (h->next)
			count += print_listint(h->next);

		return (count);
	}
	else
		return (0);
}
















