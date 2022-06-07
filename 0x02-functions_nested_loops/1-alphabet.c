#include "main.h"
#include <unistd.h>

/**
 * main - check code
 *
 * print alphabet ()
 *
 * Return: Always 0
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
