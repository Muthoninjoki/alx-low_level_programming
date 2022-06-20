#include "main.h"
#include <string.h>

/**
 * _strstr - check description
 * Description: function that locates a substring
 * @haystack:string
 * @needle:substring
 * Return: a pointer to the beginning of the
 * located substring, or null if the substring
 * is not found
 */

char *_strstr(char *haystack, char *needle)
{
char *s = haystack, *t = needle;

while (*haystack)
{
while (*needle)
{
if (*haystack++ != *needle++)
{
break;
}
}
if (!*needle)
{
return (s);
}
needle = t;
s++;
haystack = s;
}
return (0);
}
