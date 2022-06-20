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
while (*s != '\0')
{
if  (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
return (0);
}
