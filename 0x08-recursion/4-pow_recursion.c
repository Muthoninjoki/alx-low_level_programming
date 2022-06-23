#include "main.h"

/**
 * _pow_recursion - check description
 * Description: function that returns the value
 * of x raised to the power of y
 * @x:integer
 * @y:power
 * Return: if y is lower than 0, 0 else -1
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
