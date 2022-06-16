#include "main.h"

/**
 * _strcmp - check decscription
 * Description: a function that compares two strings
 * @s1: input
 * @s2:input
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
int i = 0, c = 0;

while (s1[c] != '\0' && s2[c] != '\0')
{
if (s1[c] != s2[c])
{
i = 1;
break;
}
c++;
}
if (i == 0)
return (0);
else
return (1);
}
