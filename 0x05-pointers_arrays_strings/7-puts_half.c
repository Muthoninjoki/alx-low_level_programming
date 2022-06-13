#include "main.h"

/**
 * puts_half - check description
 * Description: prints half of a string
 * @str:input
 * Return: 0
 */

void puts_half(char *str)
{
int i = 0, a, n;
while (str[i] != '\0')
i++;
if (i % 2 == 0)
n = i / 2;

else
n = (i + 1) / 2;

for (a = n; a < i; a++)
_putchar(str[a]);
_putchar('\n');
}
