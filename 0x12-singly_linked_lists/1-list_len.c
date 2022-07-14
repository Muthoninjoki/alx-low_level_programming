#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* list_len - check description
* Description: returns the number of elements in a linked list
* @h:pointer
* Return:no of elements
*/

size_t list_len(const list_t *h)
{
int n = 0;

while (h != NULL)
{
n++;
h = h->next;
}
return (n);
}
