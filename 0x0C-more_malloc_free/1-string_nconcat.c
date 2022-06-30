#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
* string_nconcat - check description
* Description: function that concates two strings
* @s1:string
* @s2:string2
* @n: length
* Return:pointer or NULL if fails
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int length = n, i;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i]; i++)
length++;

p = malloc(sizeof(char) * (length + 1));
if (p == NULL)
return (NULL);

length = 0;

for (i = 0; s1[i]; i++)
p[length++] = s1[i];
for (i = 0; s2[i] && i < n; i++)
p[length++] = s2[i];

p[length] = '\0';

return (p);
}
