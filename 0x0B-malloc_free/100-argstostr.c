#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* argstostr - check description
* Description: function that concatenates all the arguments
* of your program
* @ac:counts arguments
* @av: array
* Return: a pointer to a new string or NULL if it fails
*/

char *argstostr(int ac, char **av)
{
char *s = NULL;
int n = 0, m = ac, p, i = 0, j = 0;
if (ac == 0 || av == NULL)
{
return (NULL);
}
while (ac--)
i += (len(av[ac]) + 1);
s = (char *) malloc(i + 1);

if (s != NULL)
{
while (n < m)
{
for (p = 0; av[n][p] != '\0'; p++)
s[p + j] = av[n][p];
s[j + p] = '\n';
j += (p + 1);
n++;
}
s[j] = '\0';
}
else
{
return (NULL);
}
return (s);
}

/**
* len: length
* @str:string
* Return: len
*/
int len(char *str)
{
int len = 0;
if (str != NULL)
{
while (str[len])
len++;
}
return (len);
}
