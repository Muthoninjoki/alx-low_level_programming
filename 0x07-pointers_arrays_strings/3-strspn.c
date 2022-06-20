#include "main.h"
#include <string.h>

/**
 * _strspn - check description
 * Description: function that gets the length of a prefix substring
 * @s:string
 * @accept:input
 * Return: number of bytes in s which consists of
 * only bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int m;

while (*s)
{
for (m = 0; accept[m]; m++)
{
if (accept[m] == *s)
{
n++;
break;
}
else if ((accept[m + 1]) == '\0')
return (n);
}
s++;
}
return (n);
}
