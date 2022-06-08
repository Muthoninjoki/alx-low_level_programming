#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the first 50 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
int i;
unsigned long t1 = 0, t2 = 1, t3;
for (i = 0; i < 50; i++)
{
t3 = t1 + t2;
printf("%lu", t3);
t1 = t2;
t2 = t2;
if (i == 49)
printf("\n");
else
printf(", ");
}
return (0);
}
