#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strdup - check description
* Description: function that returns a pointer to a
* newly allocated space in memory which contains a
* copy of the string given as a parameter
* @str:string
* Return: Null if str = Null
*/

char *_strdup(char *str)
{
int i = 0, len = 0;
char *n;

if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
len++;
n = malloc(sizeof(char) * (len + 1));

if (n == NULL)
{
return (NULL);
}
for (i = 0; str[i]; i++)
{
n[i] = str[i];
}
n[len] = '\0';
return (n);
}
