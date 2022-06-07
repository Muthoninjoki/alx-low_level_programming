#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: on success 0
 * on error, -1 is returned, and error is set appropriately
 */
void print_alphabet(void)
{
char ch;
for(ch = 'a'; ch <= 'z'; ch++){
	_putchar(ch);
}
_putchar('\n');
return (0);
}
