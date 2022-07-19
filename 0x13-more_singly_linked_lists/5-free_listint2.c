#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_listint2 - check description
* Description: frees a listint_t list
* @head:pointer
* Return:void
*/

void free_listint2(listint_t **head)
{
listint_t *t;
if (head == NULL || *head == NULL)
{
return;
}
while (*head)
{
t = *head;
*head = (*head)->next;
free(t);
}
*head = NULL;
}
