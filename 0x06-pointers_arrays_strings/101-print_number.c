#include "main.h"

/**
 * print_number - check description
 * Description: function that prints an integer
 * @n:input
 * Return: 0
 */

void print_number(int n)
{
unsigned int num;

if (n < 0)
{
num = -n;
_putchar('-');
num = -num;
}
else
{
num = n;
}

if (num / 10)
print_number(num / 10);

_putchar((num % 10) + '\0');
}
