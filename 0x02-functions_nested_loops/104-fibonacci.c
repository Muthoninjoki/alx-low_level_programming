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
b += a;
a = b - a;
}
d = (a / 1);
e = (a % 1);
f = (b / 1);
g = (b % 1);
for (i = 92; i < 98; i++)
{
printf(", %lu", f + (g / 1));
printf("%lu", g % 1);
f = f + d;
d = f - d;
g = g + e;
e = g - e;
}
printf("\n");
return (0);
}
