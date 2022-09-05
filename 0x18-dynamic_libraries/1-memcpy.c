#include "main.h"
#include <string.h>

/**
 * _memcpy - check description
 * Description: function copies memory area
 * @dest:pointer
 * @src:memory
 * @n:input
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}

