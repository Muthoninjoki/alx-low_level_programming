#include "main.h"

/**
 * rev_string - check description
 * Description: reverses a string
 * @s:input
 * Return: 0
 */

void rev_string(char *s)
{
int a, b, c;
a = 0;
b = 0;

while (s[b] != '\0')
{
b++;
}
b--;
while (b > a)
{
c = s[b];
s[b--] = s[a];
s[a++] = c;
}
}
