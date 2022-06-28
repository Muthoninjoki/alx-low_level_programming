#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* str_concat - check description
* Description: function that concatenates two strings
* @s1:string
* @s2:string
* Return: Null on failure
*/

char *str_concat(char *s1, char *s2)
{
char *n;
int i, j = 0, len = 0;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (i = 0; s1[i] || s2[i]; i++)
len++;

n = malloc(sizeof(char) * len);

if (n == NULL)
{
return (NULL);
}
for (i = 0; s1[i]; i++)
n[j++] = s1[i];

for (i = 0; s2[i]; i++)
n[j++] = s2[i];

return (n);
}
