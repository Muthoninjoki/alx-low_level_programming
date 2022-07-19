#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* insert_nodeint_at_index - check description
* Description:inserts a node at a given position
* @idx:index
* @n:new node
* @head:pointer
* Return:the address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *node;
unsigned int i = 0;
listint_t *t;

if (head == NULL)
{
return (NULL);
}
new = malloc(sizeof(listint_t));
if (new == NULL)
{
free(new);
return (NULL);
}
new->n = n;
new->next = NULL;
if (i == idx)
{
new->next = *head;
*head = new;
return (new);
}
t = *head;
i = 0;
while (t->next && i < (idx - 1))
{
i++;
t = t->next;
}
if (idx > (i + 1))
{
free(new);
return (NULL);
}
node = t->next;
t->next = new;
new->next = node;
return (new);
}
