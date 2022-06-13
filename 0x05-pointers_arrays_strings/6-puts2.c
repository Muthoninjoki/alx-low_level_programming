#include "main.h"

/**
 * puts2 - check description
 * Description: prints every other character
 * @str:input
 * Return: 0
 */

void puts2(char *str)
{
int n = 0;
while (str[n] != '\0')
{
if (n % 2 == 0)
_putchar(str[n]);
n++;
}
_putchar('\n');
}
