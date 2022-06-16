#include "main.h"

/**
 * _strncat - check description
 * Description: concatenates two strings
 * @dest:input
 * @src:input
 * @n:input
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;
while (dest[i++])
j++;

for (i = 0; src[i] && i < n; i++)
dest[j++] = src[i];

return (dest);
}
