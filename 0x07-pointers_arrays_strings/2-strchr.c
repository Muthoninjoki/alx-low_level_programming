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

i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
i++;
}
return (s);

if (s[i] == 0)
{
return (0);
}
}
