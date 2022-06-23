#include "main.h"

/**
 * factorial- check description
 * Decription: funct that returns the factorial
 * of a given number
 * @n: integer
 * Return: if n is lower than 0, 0 else return -1
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 1)
{
return (1);
}
return (n * factorial(n - 1));
}
