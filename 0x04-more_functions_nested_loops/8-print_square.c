#include "main.h"

/**
 * print_square - check description
 * Description: prints a square
 * @size:input
 * Return: 0
 */

void print_square(int size)
{
int a, b;
if (size > 0)
{
for (a = 0; a < size; a++)
{
for (b = 0; b < (size - 1); b++)
_putchar('#');

_putchar('#');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
