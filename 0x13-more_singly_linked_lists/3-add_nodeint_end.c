#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 *
 * @head: current position in the list
 * @n: int to add to the list
 * Return: listint_t*
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *c;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (*head);
}
c = *head;
while (c->next != NULL)
{
c = c->next;
}
c->next = new;
return (*head);
}
