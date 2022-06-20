#ifndef _LIST_H_
#define _LIST_H_
#include <stdlib.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: data stored in integer format
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description:  doubly linked list
 */
typedef struct dlistint_s
{
  int n;
  struct dlistint_s *prev;
  struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);

#endif /* _LIST_H_ */
