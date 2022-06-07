#include "main.h"
#include <unistd.h>
/**
 * print_alphabet_x10 - print alphabet
 * Description: prints alphabet 10 times
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
}
