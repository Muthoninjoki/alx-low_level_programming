#include "main.h"

/**
 * reverse_array - check description
 * Description: a function that reverses the conntent of an array of integers
 * @a:an array of integers
 * @n:elements of the array
 * Return: 0
 */

void reverse_array(int *a, int n)
{
int tmp, i;

for (i = n - 1; i > n / 2; i--)
{
tmp = a[n - 1 - i];
a[n - 1 - i] = a[i];
a[i] = tmp;
}
}
