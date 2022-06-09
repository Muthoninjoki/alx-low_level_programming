#include "main.h"

/**
 * more_numbers - prints 10 times from 0 to 14
 * followed by a new line
 * Return: 0
 */

void more_numbers(void)
{
int a;
int b;

for (b = 0; b < 10; b++)
{
a = 0;
while (a <= 14)
{
if (a >= 10)
{
_putchar(a / 10 + '0');
}
_putchar(a % 10 + '0');
a++;
}
_putchar('\n');
}
}
