#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

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
