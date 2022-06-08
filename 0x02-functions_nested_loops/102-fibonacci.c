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
int t1 = 1, t2 = 2;
int nextTerm = t1 + t2;
printf("Enter the number of terms: ");
for (i = 0; i < 50; i++)
{
printf("%lu", nextTerm);
t1 = t2;
t2 = nextTerm;
nextTerm = t1 + t2;
if (i == 49)
printf("\n");
else
printf(", ");
}
return (0);
}
