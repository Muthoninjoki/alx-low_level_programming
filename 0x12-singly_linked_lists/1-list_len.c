#include "lists.h"

/**
* list_len - check description
* Description: returns the number of elements in a linked list
* @h:pointer
* Return:no of elements
*/

size_t list_len(const list_t *h)
{
size_t elements = 0;

while (h)
{
elements++;
h = h->next;
}

return (elements);
}

