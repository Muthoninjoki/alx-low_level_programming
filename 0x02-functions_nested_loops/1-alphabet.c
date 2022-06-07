#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - prints alphabet
 *
 * Description: prints the alphabet in lowercase
 */

void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');

}
