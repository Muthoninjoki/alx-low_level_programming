#include "lists.h"

/**
* free_listint2 - check description
* Description: frees a listint_t list
* @head:pointer
* Return:void
*/

void free_listint2(listint_t **head)
{
listint_t *cursor;
listint_t **t = head;

if (t != NULL)
{
while (*head != NULL)
{
cursor = *head;
free(cursor);
*head = (*head)->next;
}

*t = NULL;
}
}
