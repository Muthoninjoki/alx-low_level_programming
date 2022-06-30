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
void *P;

p = malloc(b);
if (p == NULL)
{
exit(98);
}
return (p);
}
