#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* sum_them_all - check description
* Description:function that returns the sum of all its parameters
* @n: arguments
* Return:0
*/

int sum_them_all(const unsigned int n, ...)
{
va_list vl;
int sum = 0;
unsigned int i;

va_start(vl, n);

if (n != 0)
{
for (i = 0; i < n; i++)
sum += va_arg(vl, int);
}

va_end(vl);
return (sum);
}
