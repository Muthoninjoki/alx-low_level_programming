#include "main.h"
#include <unistd.h>

/**
 * main - Entry point
 * print_alphabet - check code
 *
 * Return: on success 0
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
