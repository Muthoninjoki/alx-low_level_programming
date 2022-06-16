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
i = 0;
while (dest[i] != '\0')
{
i++;
}
for (j = 0 ; src[j] != '\0' && j < n; ++j, ++i)
{
dest[i] = src[j];
}
dest[i] = '\0';

return (dest);
}
