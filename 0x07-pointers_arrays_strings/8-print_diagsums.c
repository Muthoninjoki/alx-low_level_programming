#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - check description
 * Description: function that prints the sum of
 * the two diagonals of a square matrix of integers
 * @a: input
 * @size:size
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
int n, sum1 = 0, sum2 = 0;

for (n = 0; n < size; n++)
{
sum1 += a[n];
a += size;
}

a -= size;

for (n = 0; n < size; n++)
{
sum2 += a[n];
a -= size;
}

printf("%d, %d\n", sum1, sum2);
}
