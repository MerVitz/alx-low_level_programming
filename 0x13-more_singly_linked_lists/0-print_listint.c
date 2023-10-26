#include "lists.h"
#include <stdio.h>
/**
 *The fucntion - print sll elements of list_t
 *
 * @h: singly linked list to print
 * Returns: size_t,i
 */
size_t print_listint(const listint_t *h)
{
size_t i;
for (i = 0; h; i++)
{
printf("%d\n", h->n);
h = h->next;
}
return (i);
}
