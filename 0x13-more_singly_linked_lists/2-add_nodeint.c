#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - add new node to the list
 *
 * @head: current node in the list
 * @n:int to add to list
 * Return: listint_t*
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = *head;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = *head;
*head = new;
return (*head);
}
