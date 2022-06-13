#include "main.h"

/**
 * _puts - check description
 * Description: prints a sting followed by a new line
 * @str:input
 * Return: 0
 */

void _puts(char *str)
{
while (*str)

_putchar(*str++);

_putchar('\n');
}
