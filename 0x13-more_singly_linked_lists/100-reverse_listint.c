#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* reverse_listint - check description
* Description:reverses a listint list
* @head:pointer
* Return: a pointer to the first node of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
listint_t *prev_node = NULL, *next_node;

if (head == NULL || *head == NULL)
{
return (NULL);
}
next_node = (*head)->next;
for (; next_node; next_node = (*head)->next)
{
(*head)->next = prev_node;
prev_node = *head;
*head = next_node;
}
(*head)->next = prev_node;
return (*head);
}
