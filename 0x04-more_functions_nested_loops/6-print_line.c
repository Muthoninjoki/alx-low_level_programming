#include "main.h"

/**
 * print_line - check description
 * Description: draws a straight line in the terminal
 * @n:input
 * Return: 0
 */

void print_line(int n)
{
while (n-- > 0)
{
_putchar('_');
}
_putchar('\n');
}
