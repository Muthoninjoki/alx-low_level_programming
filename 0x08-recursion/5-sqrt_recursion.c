#include "main.h"

/**
 * natural_sqrt- check description
 * Description: returns actual sqare root
 * @n:integer
 * @m:input
 * Return: 0
 */

int natural_sqrt(int n, int m)
{
if (n < 0)
{
return (-1);
}
if ((m * m) > n)
{
return (-1);
}
if ((m * m) == n)
{
return (m);
}
return (natural_sqrt(n, m + 1));
}

/**
 * _sqrt_recursion - check description
 * Description: function that returns the
 * natural square root of a number
 * @n: integer
 * Return: -1
 */

int  _sqrt_recursion(int n)
{
return (natural_sqrt(n, 1));
}
