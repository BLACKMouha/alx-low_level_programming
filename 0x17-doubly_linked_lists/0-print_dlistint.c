#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * Prototype: size_t print_dlistint(const dlistint_t *h);
 * @h: the head of a dlistint_t list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
  unsigned int number_of_nodes = 0;
  const dlistint_t *current_node;

  if (h)
  {
    for (current_node = h; current_node; current_node = current_node->next)
    {
      printf("%d\n", current_node->n);
      number_of_nodes++;
    }
    return (number_of_nodes);
  }
  return (0);
}
