#include <stdlib.h>
#include "lists.h"

/**
 * list_len_recursion - returns the number of elements in a linked list
 * using recursion
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len_recursion(const list_t *h)
{
  if (h == NULL) /* base case */
    return 0;
  else /* recursive case */
    return 1 + list_len_recursion(h->next);
}
