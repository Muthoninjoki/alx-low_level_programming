#include "lists.h"

/**
* print_listint - check decription
* Description: prints all the elements of a listint_t list
* @h:head of list
* Return:number of nodes
*/

size_t print_listint(const listint_t *h)
{
const listint_t *cursor = h;
size_t count = 0;

while (cursor != NULL)
{
printf("%d\n", cursor->n);
count += 1;
cursor = cusor->next;
}
return (count);
}
