#include "lists.h"

/**
* listint_len - check description
* Description:returns the no of elements in a linked listint_t list
* @h: pointer to the header
* Return: no of elements
*/

size_t listint_len(const listint_t *h)
{
size_t nodes = 0;

while (h)
{
nodes++;
h = h->next;
}
return (nodes);
}
