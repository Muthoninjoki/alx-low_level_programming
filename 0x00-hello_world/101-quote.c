#include <stdio.h>
#include <unistd.h>
int main(void)
{
/**
 * main - prints exactly "and that piece of art is useful\" - Dora Korpar, 2015-10-19",
 *
 * Return: (1)
 */
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
