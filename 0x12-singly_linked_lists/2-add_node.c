#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* add_node - check description
* Description: adds a new node at the beginning of a list
* @head:pointer
* @str:string
* Return:the address of the new element or NULL if failed
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
new_node->len = strlen(str);
new_node->next = *head;
*head = new_node;
return (*head);
}
