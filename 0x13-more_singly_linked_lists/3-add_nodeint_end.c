#include "lists.h"

/**
* add_nodeint_end - check description
* Description: adds a new node at the end of a list
* @head: pointer
* @n: integer
* Return:the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node;
listint_t *cursor = *head;

new_node = malloc(sizeof(listint_t));
if (new_node != NULL)
{
new_node->n = n;
new_node->next = NULL;
}
else
return (NULL);
if (cursor != NULL)
{
while (cursor->next != NULL)
cursor = cursor->next;

cursor->next = new_node;
}
else
*head = new_node;
return (new_node);
}
