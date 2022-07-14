#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* struct lists_s - singly linked lists
* @str:string
* @len:length
* @next:next node
* Description:signly linked list node structure
*/
typedef struct list_s
{
char *str;
unsigned int len;
struct lists_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);

#endif /*LIST_H*/
