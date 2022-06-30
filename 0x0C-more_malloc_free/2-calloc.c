#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _calloc - check description
* Description: function that allocates memory for an array
* using malloc
* @nmemb:elements
* @size:size
* Return: pointer to the allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *m;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

m = malloc(nmemb * size);
if (m != NULL)
{
for (i = 0; i < (nmemb * size); i++)
m[i] = 0;
return (m);
}
else
return (NULL);
}
