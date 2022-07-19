#include "lists.h"

/**
* free_listint - check description
* Description:frees a listint_t list
* @head:pointer
* Return:void
*/

void free_listint(listint_t *head)
{
listint_t *t;
while (head != NULL)
{
t = head;
head = head->next;
free(t);
}
}
