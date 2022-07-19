#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* get_nodeint_at_index - check description
* Description:returns the nth node of a listint_t list
* @head:pointer
* @index:node that we return
* Return: NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
if (head == NULL)
{
return (NULL);
}
while (head)
{
if (i == index)
{
return (head);
}
head = head->next;
i++;
}
return (NULL);
}
