#include "main.h"
#include <string.h>

/**
 * _strpbrk - check Description
 * Description: function that searches a string for
 * any of a set of bytes
 * @s:string
 * @accept:input
 * Return: a pointer to the byte in s that matches
 * one of the bytes in accept or null if no such
 * byte is found
 */

char *_strpbrk(char *s, char *accept)
{
int n;

while (*s)
{
for (n = 0; accept[n]; n++)
{
if (*s == accept[n])
{
return (s);
}
}
s++;
}
return (0);
}
