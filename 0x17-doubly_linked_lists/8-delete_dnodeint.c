#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * int delete_dnodeint_at_index - deletes the node at the index index of a
 * dlistint_t linked list.
 * Prototype: int delete_dnodeint_at_index(dlistint_t **head,
 * unsigned int index);
 * @index: the index of the node that should be deleted
 * Return 1 if it succeeded, -1 if it failed
 */



int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node_at_index, *non_current_node, *temp_node;
	unsigned int non = 0;

	temp_node = *head;
	/* compute the number of node ==> non */
	non_current_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	for (non_current_node = *head; non_current_node;
	non_current_node = non_current_node->next)
		non++;
	free(non_current_node);

	/* if head and index are not valid */
	if (*head == NULL || index >= non)
		return (-1);

	else if (*head != NULL && index < non)
	{
		/* we can get the node at index index */
		node_at_index = get_dnodeint_at_index(*head, index);
		temp_node = *head;
		if (index == 0)
		{
			(*head) = temp_node->next;
			temp_node->next->prev = NULL;
			free(temp_node);
			return (1);
		}

		else
		{
			if (node_at_index->next == NULL && node_at_index->prev == NULL)
			{
				free_dlistint(temp_node);
				return (1);
			}
			else if (node_at_index->next == NULL && node_at_index->prev != NULL)
			{
				node_at_index->prev->next = NULL;
				free(node_at_index);
				return (1);
			}
			else
			{
				node_at_index->prev->next = node_at_index->next;
				node_at_index->next->prev = node_at_index->prev;
				free(node_at_index);
				return (1);
			}
		}
	}

	else
		return (-1);
}


/**
 * get_dnodeint_at_index - returns the nth node of dlisint_t linked list;
 * @head: head of a dlistint_t list
 * @index: the index of the node to be found
 * Return: the nth node or NULL if it failed
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int non = 0; /* non means number of nodes */
	unsigned int  current_index = 0;
	dlistint_t *current_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (head)
	{
		current_node = head;
		while (current_node)
		{
			current_node = current_node->next;
			non++;
		}

		if (index > (non - 1))
			return (NULL);

		current_node = head;
		while (current_node && current_index < index)
		{
			current_node = current_node->next;
			current_index++;
		}
		return (current_node);
	}
	return (NULL);
}


/**
 * free_dlistint - frees a dlistint_t list
 * Prototype: void free_dlistint(dlistint_t *head);
 * @head: head of a dlistint_t list
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node, *temp;

	current_node = head;

	while (current_node)
	{
		temp = current_node;
		current_node = current_node->next;
		free(temp);
	}

	free(current_node);
}
