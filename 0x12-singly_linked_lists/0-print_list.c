#include "lists.h"

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

while (cursor != NULL)
{
if (cursor->str != NULL)
printf("[%d] %s\n", cursor->len, cursor->str);
else
printf("[0] (nil)\n");
count += 1;
cursor = cusor->next;
}

return (count);
}
