#include "main.h"
#include <unistd.h>
/**
 * main - check the code
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)

{
int a;
for (a = 0; a < 10; a++)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
return (0);
}
