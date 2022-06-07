#include "main.h"
#include <unistd.h>

/**
 * times_table - prints the 9 times table
 *
 * Description: Prints the 9 times table starting with 0
 *
 * Return: 0
 */

void times_table(void)
{
int a, b;
for (a = 9; a < 10; a++)
{
for (b = 1; j <= 10; b++)
{
result = a * b;
}
if (result < 10)
{
_putchar(',');
_putchar(' ');
_putchar(result % 10 + '0');
}
else if (result >= 10)
{
_putchar(',');
_putchar(' ');
_putchar(result / 10 + '0');
_putchar(result % 10 + '0');
}
_putchar(0);
return (0);
}
}
