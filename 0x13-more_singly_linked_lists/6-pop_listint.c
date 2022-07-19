#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* pop_listint - check description
* Description: deletes the head node of a listint_t
* @head:pointer
* Return: 0
*/

int pop_listint(listint_t **head)
{
int d = 0;
listint_t *t;

if (*head == NULL)
return (0);

d = (*head)->n;
t = *head;
(*head) = (*head)->next;
free(t);
return (d);
}

