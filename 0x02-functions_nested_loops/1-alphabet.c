#include "main.h"
#include <unistd.h>

/**
 * main - check the code
 *
 * print_alphabet - check code
 *
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
