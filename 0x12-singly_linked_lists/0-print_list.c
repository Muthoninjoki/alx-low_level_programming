#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_list - check description
* Description: prints all the elements of a list
* @h:pointer
* Return:the number of nodes
*/

size_t print_list(const list_t *h)
{
const list_t *cursor = h;
size_t count = 0;

for (count = 0; cursor; count++)
{
if (cursor->str == NULL)
printf("[0] (nil)\n");
else
{
printf("[%d] %s\n", cursor->len, cursor->str);
}
cursor = cursor->next;
}

return (count);
}
