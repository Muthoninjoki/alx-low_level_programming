#include "main.h"
#include <unistd.h>

/**
 * main - check code
 *
 * Description: prints _putchar followed by a new line
 *
 * Return: Always 0
 */

int _putchar(char c)

{
char ch[8] = "_putchar";
int a;
for (a = 0; a < 8; a++)
{
_putchar(ch[a]);
}
_putchar('\n');
return (0);
}
