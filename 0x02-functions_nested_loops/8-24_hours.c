#include "main.h"
#include <unistd.h>

/**
 * jack_bauer - prints every min of the day
 *
 * Description: function that prints every min
 *
 * Return: 0
 */

void jack_bauer(void)
{
int h;
for (h = 0; h < 24; h++)
{
int m;
for (m = 0; m < 60; m++)
{
_putchar('0' + (h / 10));
_putchar('0' + (h % 10));
_putchar(':');
_putchar('0' + (m / 10));
_putchar('0' + (m % 10));
_putchar('\n');
}
}
}
