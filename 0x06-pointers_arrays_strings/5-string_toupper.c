#include "main.h"

/**
 * string_toupper - check Description
 * Description: changes all lowercase letters od a string  to uppercase
 * @str:input
 * Return: 0
 */

char *string_toupper(char *str)
{
char *s = str;

while (*str)
{
if (*str >= 'a' && *str <= 'z')
*str = *str - 32;

str++;
}
return (s);
}
