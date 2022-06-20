#include "main.h"

/**
 * print_diagsums - check description
 * Description: function that prints the sum of
 * the two diagonals of a square matrix of integers
 * @a:input
 * @size:size
 * Return: 0
 */

void print_diagsums(int *a, int size);
{
int n, i = 0, j = 0;
for (n = 0; n < size; n++)
{
i += *(a + (size * n + n));
j += *(a + (size * n + size - 1 - n));
}
printf("%d, ", i);
printf("%d\n", j);
}
