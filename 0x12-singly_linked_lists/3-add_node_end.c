#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* add_node_end - check description
* Description: adds a new node at the end of a list
* @head:pointer
* @str:string
* Return: the address of the new element or NULL if fails
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *last;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
new_node->len = strlen(str);
new_node->next = NULL;
last = *head;
if (last == NULL)
{
*head = new_node;
}
else
{
while (last->next != NULL)
{
last = last->next;
}
last->next = new_node;
}
return (*head);
}

