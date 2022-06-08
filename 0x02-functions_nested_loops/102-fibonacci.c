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
int i, n;
int t1 = 1, t2 = 2;
int nextTerm = t1 + t2;
printf("Enter the number of terms: ");
scanf("%d", &n);
printf("Fibonacci Series: %d, %d, ", t1, t2);
for (i = 0; i <= 49; i++)
{
printf("%d, ", nextTerm);
t1 = t2;
t2 = nextTerm;
nextTerm = t1 + t2;
}
return (0);
}
