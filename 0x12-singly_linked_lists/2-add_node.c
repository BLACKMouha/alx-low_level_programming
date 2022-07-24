#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * Prototype: list_t *add_node(list_t **head, const char *str);
 * @head: points to the first element of a list_t list
 * @str: string field of the newly created element
 * Return: a pointer to the newly create element, or NULL if @str needs
 * to be duplicated
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (!str)
		return (NULL);

	new = malloc(sizeof(new));
	if (new == NULL)
		return (free(new), NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
