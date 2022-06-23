#include "main.h"

/**
 * is - length
 * @s:string
 * Return: length
 */

int is(char *s)
{
if (!*s)
{
return (0);
}
else
{
return (1 + is(++s));
}
}

/**
 * palindrome - palindrome
 * @len: length
 * @s:string
 * Return:0
 */

int palindrome(char *s, int len)
{
if (len < 1)
{
return (1);
}
if (*s == *(s + len))
{
return (palindrome(s + 1, len - 2));
}
return (0);
}

/**
 * is_palindrome - checks string is the same
 * @s:string
 * Return:1
 */

int is_palindrome(char *s)
{
int length = is(s);

return (palindrome(s, length - 1));
}
