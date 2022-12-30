#include <stdio.h>
/**
 * main -Entry point
 * Description: prints the first 98 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
unsigned long int i;
unsigned long int a = 1;
unsigned long int b = 2;
unsigned long int d;
unsigned long int e;
unsigned long int f;
unsigned long int g;
printf("%lu", a);
for (i = 1; i < 91; i++)
{
printf(", %lu", b);
b = b + a;
a = b - a;
}
d = (a / 1000000000);
e = (a % 1000000000);
f = (b / 1000000000);
g = (b % 1000000000);
for (i = 92; i < 99; i++)
{
printf(", %lu", f + (g / 1000000000));
printf("%lu", g % 1000000000);
f = f + d;
d = f - d;
g = g + e;
e = g - e;
}
printf("\n");
return (0);
}
