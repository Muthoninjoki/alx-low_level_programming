#include "main.h"
#include <unistd.h>

/**
 * _abs - computes
 * Description: computes the absolute value of an integer
 *
 * Return: 0
 * @n:input
 */

int _abs(int n)
{
if (n > 0)
{
n = n;
}
else if (n < 0)
{
n = -n;
}
else if (n == 0)
{
n = 0;
}
return (n);
}
