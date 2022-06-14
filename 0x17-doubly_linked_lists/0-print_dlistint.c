#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print all the elements of a dlistint_t list
 * Prototype: size_t print_dlistint(const dlistint_t *h);
 * @h: the head of a dlistint_t list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
  unsigned int number_of_nodes = 0; /* The returned number of nodes*/
  dlistint_t *current_node; /* this variable will traverse all the DLL*/

    if (h)
    {
      for (current_node = h; current_node; current_node = current_node->next)
      {
        printf("%d\n" current_node->n);
        number_of_nodes++;
      }

      return (number_of_nodes);
    }

    return (0);
}