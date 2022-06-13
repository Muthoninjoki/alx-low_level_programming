#include "main.h"

/**
 * print_rev - check description
 * Description: print a string
 * @s:input
 * Return: 0
 */

void print_rev(char *s)
{
int n = 0;
while (s[n] != '\0')
n++;

while (n)
_putchar(s[--n]);

_putchar('\n');
}
