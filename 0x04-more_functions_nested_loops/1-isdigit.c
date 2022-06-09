#include "main.h"
#include <unistd.h>

/**
 * _isdigit - check description
 * Description: checks for a digit
 * @c:input
 * Return: 1 if c is a digit otherwise 0
 */

int _isdigit(int c)
{
if ((c >= 0) && (c <= 9))
{
return (1);
}
else
{
return (0);
}
}
