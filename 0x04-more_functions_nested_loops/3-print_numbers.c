#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * followed by new line
 */

void print_numbers(void)
{
int i;
for (i = 0; i < 10 ; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
