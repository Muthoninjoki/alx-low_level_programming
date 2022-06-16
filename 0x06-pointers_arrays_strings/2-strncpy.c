#include "main.h"
#include <string.h>

/**
 * _strncpy - check description
 * Description: a function that copies a string
 * @dest:input
 * @src:input
 * @n:input
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)

dest[i] = src[i];

for ( ; i < n; i++)

dest[i] = '\0';

return (dest);
}
