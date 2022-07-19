#include "lists.h"

/**
* pop_listint - check description
* Description: deletes the head node of a listint_t
* @head:pointer
* Return: 0
*/

int pop_listint(listint_t **head)
{
listint_t *popped;
int context;

if(*head == NULL)
return (0);

popped = *head;
context = popped->n;
free(popped);

*head = (*head)->next;
return (context);
}
