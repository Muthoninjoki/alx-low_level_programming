#include "lists.h"

/**
* dlistint_len - counts no of elements
* @h:head
* Return: no of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
size_t nodes = 0;

while (h)
{
nodes++;
h = h->next;
}

return (nodes);
}
