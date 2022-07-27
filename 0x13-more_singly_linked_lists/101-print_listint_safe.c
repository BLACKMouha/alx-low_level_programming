#include "lists.h"

/**
 * print_listint_safe - prints a listint_t list. It print should go
 * through the list only once
 *
 * Prototype: size_t print_listint_safe(const listint_t *head);
 * @head: points to the first node
 *
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *one = head, *two = head;

	if (head == NULL)
		exit(98);

	while (one && two && two->next && head)
	{
		one = one->next;
		two = two->next->next;
		if (one == two)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}
	head = NULL;
	return (nodes);
}
























