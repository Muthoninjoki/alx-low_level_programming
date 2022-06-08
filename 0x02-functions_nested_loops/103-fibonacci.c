#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Fibonacci sequence
 *
 * Return: 0
 */

int main(void)
{
unsigned long int a = 4000000;
unsigned long int b = 0;
unsigned long int c = 1;
unsigned long int d = 0;
unsigned long int e = 0;

while (a > d)
{
d = b + c;

if ((d % 2) == 0)
{
e += d;
}
b = c;
c = d;
}
printf("%li\n", e);
return (0);
}
