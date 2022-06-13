#include "main.h"

/**
 * puts_half - check description
 * Description: prints half of a string
 * @str:input
 * Return: 0
 */

void puts_half(char *str)
{
int n;
int m;

while (str[n] != '\0')
{
n++;
}
if (n % 2 == 1)
{
m = (n + 1) / 2;

while (str[m] != '\0')
{
_putchar(str[m]);
m++;
}
}
else
{
m = (n / 2);
while (str[m] != '\0')
{
_putchar(str[m]);
m++;
}
}
_putchar ('\n');
}
