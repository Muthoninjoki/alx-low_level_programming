#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* sum_listint - check description
* Description: returns sum of all the data
* @head:pointer
* Return:sum
*/

int sum_listint(listint_t *head)
{
int sum = 0;

if (head == NULL)
return (0);

while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
