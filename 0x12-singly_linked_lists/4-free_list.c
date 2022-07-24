#include "lists.h"

/**
 * free_list - free a list_t list
 * Prototype: void free_list(list_t *head);
 * @head: points to the first element of a list_t list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
