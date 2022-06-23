#include "main.h"

/**
 * is_prime_number - check description
 * Description: function that reurns 1
 * @n: integer
 * Return:0
 */

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (is_prime_number(n, n - 1));
}

/**
 * _prime - calculates prime number
 * @n:integer
 * @m: input
 * Return:0
 */

int _prime(int n, int m)
{
if (m == 1)
return (1);
if (n % m == 0 && m > 0)
return (0);
return (_prime(n, m - 1));
}
