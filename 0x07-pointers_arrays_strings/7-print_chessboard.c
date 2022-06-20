#include "main.h"

/**
 * print_chessboard - check description
 * Description: funtion that prints the chessboards
 * @a:input
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
int n, m;

for (n = 0; n < 8; n++)
{
for (m = 0; m < 8; m++)
{
_putchar(*(*(n + a) + m));
}
_putchar('\n');
}
}
