#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0 (Success)
 */

int main (void)
{
print_alphabet();
return (0);

}

void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
}
