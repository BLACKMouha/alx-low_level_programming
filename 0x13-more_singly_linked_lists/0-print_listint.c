#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * Prototype: size_t print_listint(const listint_t *h);
 * @h: points to the first node
 * Return: the number of nodes of a listint_t list
 */
size_t print_listint(const listint_t *h)
{
	size_t non; /** non means Number Of Nodes */

	non = 0;
	if (h)
	{
		while (h != NULL)
		{
			printf("%d\n", h->n);
			h = h->next;
			non++;
		}
		return (non);
	}
	else
		return (0);

}
