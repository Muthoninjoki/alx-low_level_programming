#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* malloc_checked - check decription
* Description: a function that allocates memorry using malloc
* @b:integer
* Return: a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
void *n;

n = malloc(b);
if (n == NULL)
exit(98);

return (n);
}
