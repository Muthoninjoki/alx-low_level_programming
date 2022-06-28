#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* create_array - check description
* Description: creates an array of chars and initializes it
* with a specific char
* @size: the size of the memory to print
* @c:character
* Return: pointer to the array or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
char *n;
unsigned int i;

if (size == 0)
{
return (NULL);
}
n = malloc(sizeof(*n) * size);
if  (n == 0)
{
return (NULL);
}
for (i = 0; i < size; i++)
n[i] = c;
return (n);
}
