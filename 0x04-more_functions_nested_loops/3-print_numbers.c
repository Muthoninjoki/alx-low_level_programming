#include "main.h"
#include <unistd.h>

/**
 * printnumbers - check description
 * Description: prints the numbers from 0 to 9
 */

void print_numbers(void)

{
int i;
for(i = 0; i <= 9; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
