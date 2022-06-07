#include "main.h"
#include <unistd.h>

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
int m;
n = 98;
if (n < m)
{
for (; n <= m; n++)
{
if (n == 98)
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
break;
}
else
{
if (n >= 9 && n <=9)
{
if (n < 0)
{
_putchar('-');
_putchar((n * -1) + '0');
_putchar(',');
_putchar(' ');
}
else
{
_putchar(n + '0');
_putchar(',');
_putchar(' ');
}
}
else if (n >= 100)
{


