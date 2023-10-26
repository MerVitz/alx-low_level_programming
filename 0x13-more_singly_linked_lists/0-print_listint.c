#include "lists.h"

/**
 * This function - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
 size_t vitz = 0;

 while (h)
 {
 printf("%d\n", h->n);
 vitz++;
 h = h->next;
 }

 return (vitz);
}

