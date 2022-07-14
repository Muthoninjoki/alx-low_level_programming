#ifndef LISTS_H
#define LISTS_H

/**
* struct lists_s - singly linked lists
* @str:string
* @len:length
* @next:next node
*/
typedef struct list_s
{
char *str;
unsigned int len;
struct lists_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif /*LISTS_H*/
