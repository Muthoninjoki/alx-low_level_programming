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
int i = 0;

while (*s1 == '\0' && *s2 == '\0')
{
if (*s1 == *s2)
{
i = 1;
}
s1++;
s2++;
}
if (i == 0)
return (0);
else
return (1);
}
