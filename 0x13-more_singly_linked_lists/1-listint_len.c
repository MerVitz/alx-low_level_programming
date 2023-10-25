#include "lists.h"
/**
 * listint_len - gets the number of nodes in a list
 *
 * @h: singly linked list
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
size_t i;
for (i = 0; h; i++)
{
h = h->next;
}
return (i);
}
