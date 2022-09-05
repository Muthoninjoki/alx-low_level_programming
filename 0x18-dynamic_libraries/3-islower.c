#include "main.h"
#include <unistd.h>

/**
 *_islower - checks for lowercase character
 * Description: checks for lowercase character
 *
 * Return: 1 if c is lowercase
 * @c:input
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
