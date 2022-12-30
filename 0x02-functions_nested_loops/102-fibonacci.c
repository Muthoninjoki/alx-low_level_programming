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
unsigned long t1 = 1, t2 = 2, t3 = 0;
for (i = 0; i < 49; i++)
{
printf("%ld, ", t1);
t3 = t1 + t2;
t1 = t2;
t2 = t3;
if (i == 48)
printf("%ld\n", t1);
}
return (0);
}
