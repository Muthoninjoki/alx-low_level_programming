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
int n;

if (*needle == 0)
return (*haystack);
while (*haystack)
{
n = 0;

if (haystack[n] == needle[n])
{
do {
if (needle[n + 1] == '\0')

return (haystack);
n++;
} while (haystack[n] == needle[n]);
}
haystack++;
}
return ('\0');
}
