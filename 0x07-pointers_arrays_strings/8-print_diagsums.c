#include "main.h"

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
int n, i = 0, j = 0;

for (n = 0; n < size; n++)
{
i += a[n];
a += size;
}

a -= size;

for (n = 0; n < size; n++)
{
j += a[n];
a -= size;
}

printf("%d, %d\n", i, j);
}
