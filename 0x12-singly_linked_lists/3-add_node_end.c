#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * Prototype: list_t *add_node_end(list_t **head, const char *str);
 * @head: points to the first element of a list_t list
 * @str: data inserted into the newly created element
 * Return: a pointer to the newly created element, or NULL if it
 * failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last = *head;


	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = *head;

		while (last->next != NULL)
			last = last->next;

		last->next = new;
	}
	return (*head);
}
