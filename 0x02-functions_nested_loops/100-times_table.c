#include "main.h"
#include <unistd.h>
/**
 * print_times_table - print
 * Description: prints the n times table
 * Return: 0
 * @n:input
 */
void print_times_table(int n)
{
int a;
int b;
if (n >= 0 && n <= 15)
{
for (a = 0; a <= n; a++)
{
for (b = 0; b <= n; b++)
{
if ((a * b) < 10)
{
if (b != 0)
{
_putchar(' ');
_putchar(' ');
_putchar(' ');
}
_putchar((b * a) + '0');
}
else if ((a * b) < 100)
{
_putchar(' ');
_putchar(' ');
_putchar((((b * a) / 10) % 10) + '0');
_putchar(((b * a) % 10) + '0');
}
else if ((a * b) < 1000)
{
_putchar(' ');
_putchar((((b * a) / 100) % 10) + '0');
_putchar((((b * a) / 10) % 10) + '0');
_putchar(((b * a) % 10) + '0');
}
if (b != (n))
{
_putchar(',');
}
}
_putchar('\n');
}
}
}
