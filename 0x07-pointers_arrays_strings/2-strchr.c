#include "main.h"
#include <string.h>

/**
 * _strchr - check description
 * Description: function that locates a character in a string
 * @s:string
 * @c:character
 * Return: 0
 */

char *_strchr(char *s, char c)
{
int i;

for (i = 0; (s[i] != '\0' && s[i] != c); i++)
{
if (s[i] == c)
{
return (s + i);
}
else
{
return (0);
}
}
