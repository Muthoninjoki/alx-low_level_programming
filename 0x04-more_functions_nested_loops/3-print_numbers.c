#include "main.h"
#include <unistd.h>

/**
 * print_numbers - check description
 * Description: prints the numbers from 0 to 9
 */

void print_numbers(void)

{
int i;
for (i = 48; i < 58; i++)
{
_putchar(i);
}
_putchar('\n');
}
