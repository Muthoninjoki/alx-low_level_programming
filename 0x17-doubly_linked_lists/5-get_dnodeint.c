#include "lists.h"

/**
* get_dnodeint_at_index - locates a node
* @head: head
* @index:node to locate
* Return:if the node does not exist, NULL
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
for (; index != 0; index--)
{
if (head == NULL)
return (NULL);
head = head->next;
}
return (head);
}
