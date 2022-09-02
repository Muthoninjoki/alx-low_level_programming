#include "lists.h"

/**
* print_dlistint - Prints all element of the dlistint_t
* @h: head of dlistint_t
* Return: no of nodes in list
*/

size_t print_dlistint(const dlistint_t *h)
{
size_t nodes = 0;

while (h)
{
nodes++;
printf("%d\n", h->n);
h = h->next;
}

return (nodes);
}

