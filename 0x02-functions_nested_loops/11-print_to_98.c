#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print
 *
 * Description: prints all natural numbers
 *
 * Return: 0
 * @n:input
 */

void print_to_98(int n)
{
int a = 0;
if (n > 98)
{
for (a = n; a >= 98; a--)
{
if (a != n)
{
printf(", ");
}
printf("%d", a);
}
}
else
{
for (a = n; a <= 98 ; a++)
{
if (a != n)
{
printf(", ");
}
printf("%d", a);
}
}
putchar('\n');
}
