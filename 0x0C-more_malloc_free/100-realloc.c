#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _realloc - check description
* Description: function that reallocates a memory block
* using malloc and free
* @ptr:pointer
* @old_size:size of pointer
* @new_size:size of the new memory to print
* Return:NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *p;
unsigned int i;
if (ptr == NULL)
{
p = malloc(new_size);
return (p);
}
else if (new_size == old_size)
return (ptr);

else if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
else
{
p = malloc(new_size);
if (p != NULL)
{
for (i = 0; i < old_size; i++)
*((char *)p + i) = *((char *) ptr + i);
free(ptr);
return (p);
}
else
return (NULL);
}
}
