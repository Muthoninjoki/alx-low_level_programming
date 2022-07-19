#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* delete_nodeint_at_index - check description
* Description:deletes the node at index of a listint_t list
* @head:pointer
* @index:index
* Return: 1 if it succeeds, -1 if it fails
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i = 0;
listint_t *t, *node;

if (head == NULL || *head == NULL)
{
return (-1);
}
if (i == index)
{
if (*head)
{
t = *head;
*head = (*head)->next;
free(t);
return (1);
}
}
else
{
t = *head;
while (i < (index - 1) && t)
{
i++;
t = t->next;
}
if (t)
{
node = t;
t = t->next;
node->next = t->next;
free(t);
}
else
return (-1);
}
return (1);
}
